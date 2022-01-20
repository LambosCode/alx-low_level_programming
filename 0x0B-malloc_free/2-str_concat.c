#include "main.h"

/**
 * str_concat - copy string and manipulate
 * @s1: buffers into allocated memory
 * @s2: buffers into allocated memory
 * Return: returns string already manipulated
 */

char *str_concat(char *s1, char *s2)
{
	int cnt = _strlen(s1) + _strlen(s2);
	int i = 0;
	char *str = malloc(cnt + 1);

	if (!s1 || !s2 || !str)
		return (0);

	for (; i < cnt; i++)
	{
		if (i < _strlen(s1))
			str[i] = s1[i];
		else if (i >= _strlen(s1) && *s2 != 0)
		{
			str[i] = *s2;
			s2++;
		}
	}

	str[i] = 0;

	return (str);
}

/**
 * _strlen - counts length of a sting or char pointer
 * @s: accept user input
 * Return: always return legnth counted
 */

int _strlen(char *s)
{
	int count = 0;

	if (!s)
		return (0);

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
