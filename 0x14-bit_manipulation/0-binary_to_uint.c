#include "main.h"

/**
 * binary_to_uint - convert binary to decimal
 * @b: binary in string
 *
 * Return: converted numbers to unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int rslt = 0, cnt = 0;

	if (!b | *b = 0)
		return (0);

	while (b[cnt] != 0)
		cnt++;
	cnt--;
	while (*b != 0)
	{
		if (*b >= 48 && *b <= 49)
		{
			rslt += (*b - 48) << cnt--;
			b++;
		}
		else
			return (0);
	}
	return (rslt);
}
