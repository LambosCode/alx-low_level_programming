#include "main.h"

/**
 * _strspn - checking first segment for same characters
 * @s: string to check
 * @accept: verify strings are in first byte
 * Return: int numbers of characters that are the same
 */

unsigned int _strspn(char *s, char *accept)
{
	int x = 0;
	int i = 0;
	int cnt = 0;

	while (accept[x] != 0)
	{
again:
		if (accept[x] != s[i] && s[i] != 32 && s[i] != 0)
		{
			i++;
			goto again;
		}
		else if (s[i] == 32 || s[i] == 0)
		{
			i = 0;
			x++;
			if (accept[x] == 0)
				break;
			goto again;
		}
		else
			cnt++;
		i++;
	}
	return (cnt);
}
