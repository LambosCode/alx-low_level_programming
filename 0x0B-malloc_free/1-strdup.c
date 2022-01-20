#include "main.h"

/**
 * _strdup - copy string and manipulate
 * @str: buffers into allocated memory
 * Return: returns string already manipulated
 */

char *_strdup(char *str)
{
	char *sstr;
	int i = 0;

	sstr = malloc(sizeof(char) * _strlen(str) + 1);	

	if (!str || !sstr)
		return (0);

	for (; str[i] != 0; i++)
		*(sstr + i) = *(str + i);

	sstr[i] = 0;
	return (sstr);
}

/**
 * _strlen - count strings
 * @s: - buffer s
 * Return: length and count string
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
