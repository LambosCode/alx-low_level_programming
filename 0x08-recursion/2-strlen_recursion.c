#include "main.h"

/**
 * _strlen_recursion - prints length of stringd
 * @s: buffers string.
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
}
