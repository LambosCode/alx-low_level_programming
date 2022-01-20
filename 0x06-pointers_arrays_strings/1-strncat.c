#include "main.h"

/**
 * _strncat - concatinate strings of two strings
 * @dest: modify memory to store src string
 * @src: strings to be copied
 * @n: length to copy from string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int cnt = 0, cnt1 = 0;

	while (dest[cnt] != 0)
		cnt++;
	while (src[cnt1] != 0)
		cnt1++;
	if (n > cnt1)
	{
		cnt1 = 0;
		while (src[cnt1] != 0)
		{
			dest[cnt] = src[cnt1];
			cnt++;
			cnt1++;
		}
		dest[cnt] = 0;
	}
	else
		for (cnt1 = 0; !(n <= 0) && cnt1 < n && src[cnt1] != 0; cnt++, cnt1++)
			dest[cnt] = src[cnt1];

	return (dest);
}
