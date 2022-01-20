#include <unistd.h>

/**
 * _putchar - prints one letter
 *
 * @c: ascii character print
 *
 * Return: no of charter printed
 */

int _putchar(char c)
	return (write(1, &c, 1));
