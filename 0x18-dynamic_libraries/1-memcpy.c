#include "main.h"

/**
 * _memcpy - check strings
 * @dest: strings of letters
 * @src: single to check with
 * @n: number of byte in memory
 * Return: destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = *src;
		src++;
	}
	return (dest);
}
