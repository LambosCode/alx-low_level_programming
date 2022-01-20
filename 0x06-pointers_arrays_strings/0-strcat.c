#include "main.h"

/**
 * _strcat - concatinate strings of two strings
 * @dest: modify memory to store src string
 * @src: strings to be copied
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int cnt = 0, cnt1 = 0;

	while (dest[cnt] != 0)
		cnt++;
	if (cnt != 0)
	{
		while (src[cnt1] != 0)
		{
			dest[cnt] = src[cnt1];
			cnt++;
			cnt1++;
		}
		dest[cnt] = 0;
	}
	else
		dest = src;

	return (dest);
}
