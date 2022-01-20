#include "main.h"

/**
 * _strncpy - concatinate strings of teo string
 * @dest: modify memory to store src string
 * @src: strings to be copied
 * @n: length to copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int cnt = 0;

	if ((src[cnt] == 0) && (n > 0))
	{
		for (; cnt < n; cnt++)
			dest[cnt] = 0;
		return (dest);
	}

	while (src[cnt] != 0)
		cnt++;

	if ((n < cnt) && !(n <= 0))
	{
		cnt = 0;
		for (; cnt < n; cnt++)
			dest[cnt] = src[cnt];
	}
	else if (n > cnt && !(n <= 0))
	{
		cnt = 0;
		for (; src[cnt] != 0; cnt++)
			dest[cnt] = src[cnt];
		for (; cnt < n; cnt++)
		dest[cnt] = 0;

	}

	return (dest);
}
