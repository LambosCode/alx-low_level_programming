#include "main.h"

/**
 * _strchr - check strings
 * @s: strings of letters
 * @c: single to check with
 * Return: c
 */

char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
			return (NULL);
	}
	return (s);
}
