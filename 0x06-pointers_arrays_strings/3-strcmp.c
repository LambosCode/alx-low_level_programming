#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: string one to be compared
 * @s2: string aginst which is compared
 * Return: 0 if is s1 is the same with s2, otherwise *s1 - *s2
 */

int _strcmp(char *s1, char *s2)
{
	int cnt = 0;

	while (s1[cnt] != 0)
	{
		if (s1[cnt] == s2[cnt])
			cnt++;
		else
			return (s1[cnt] - s2[cnt]);
	}

	return (0);
}
