#include "main.h"

/**
 * _strpbrk - check some string
 * @s: contains strings
 * @accept: some strings
 * Return: ramaining string
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s)
	{
again:
		if (*s == 0)
			break;
		if (*s != accept[i])
		{
			i++;
			if (accept[i] == 0)
			{
				i = 0;
				s++;
			}
			goto again;
		}
		else
			return (s);
	}
	return ('\0');
}
