#include "main.h"

/**
 * _puts - prints just like printf
 * @str: collect the system or user input
 */

void _puts(char *str)
{
	write(1, str, _strlen(str));
	_putchar(10);
}

/**
 * _strlen - counts length of a sting or char pointer
 * @str: accept user input
 * Return: always return legnth counted
 */

int _strlen(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}
