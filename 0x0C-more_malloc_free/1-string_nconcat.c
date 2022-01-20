#include "main.h"
#include <stdio.h>
int main(void)
{
    char *concat;

    concat = string_nconcat(NULL, NULL, 12);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
/**
 * string_nconcat - combine two strings
 * @s1: destination string
 * @s2: source string
 * @n: n byte to be copied
 * Return: combination of s1 and s2 in new tmp
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *tmp;
	int i = 0;

	if (!s1 && !s2)
		return ('\0');
	else if (s1 && (n == 0 || !s2 || *s2 == 0))
	{
		tmp = malloc(_strlen(s1) + 1);
		for (; *s1 != 0; i++, s1++)
			tmp[i] = *s1;
	}

	if (n < (unsigned int)_strlen(s2) && n != 0)
	{
		tmp = malloc(_strlen(s1) + n + 1);
		for (; *s1 != 0; i++, s1++)
			tmp[i] = *s1;
		for (; *s2 != 0 && n != 0; i++, s2++, n--)
			tmp[i] = *s2;
	}
	else if (n > (unsigned int)_strlen(s2) && s2 != 0 && *s2 != 0)
	{
		tmp = malloc(_strlen(s2) + 1);
		for (; *s2 != 0; s2++, i++)
			tmp[i] = *s2;
	}

	if (!tmp)
		return (0);

	return (tmp);
}

/**
 * _strlen - counts length of a sting or char pointer
 * @s: accept user input
 * Return: always return legnth counted
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (i);
	while (*s != 0)
	{
		i++;
		s++;
	}

	return (i);
}
