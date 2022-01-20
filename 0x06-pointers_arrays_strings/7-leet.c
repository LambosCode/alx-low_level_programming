#include "main.h"

/**
 * leet - encoding
 * @s: string to encode
 *
 * Return: encoded string
 */

char *leet(char *s)
{
	char cap[] = {65, 69, 79, 84, 76};
	char lwc[] = {97, 101, 111, 116, 108};
	char num[] = {52, 51, 48, 55, 49};
	int cnt = 0, i = 0;

	while (s[cnt] !=  0)
	{
		while (i < 5)
		{
			if (s[cnt] == cap[i] || s[cnt] == lwc[i])
			{
				s[cnt] = num[i];
				break;
			}
			i++;
		}
		i = 0;
		cnt++;
	}
	return (s);
}
