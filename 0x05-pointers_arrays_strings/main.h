#ifndef holberton_h
#define holberton_h

#include <unistd.h>

/**
 * _putchar - outputs to screen
 * @c: accept or collect users input and buffers
 * Return: writes to screen
 */

int _putchar(char c);

/**
 * reset_to_98 - changes value of n in main program
 * @n: pointing to value of n in main program
 */

void reset_to_98(int *n);

/**
 * swap_int - changes value of two integerd
 * @a: collects user input
 * @b: collect second user input
 */

void swap_int(int *a, int *b);

/**
 * _strlen - counts length of a sting or char pointer
 * @s: accept user input
 * Return: always return legnth counted
 */

int _strlen(char *s);

/**
 * _puts - print to screen
 * @str: buffering user input to screen
 */

void _puts(char *str);

/**
 * print_rev - prints reverse of a string
 * @s: collects user input
 */

void print_rev(char *s);

/**
 * rev_string - reverse of a string
 * @s: collects user input
 */

void rev_string(char *s);
/**
 * puts_half - prints half of strings length
 * @str: collect user or system input
 */

void puts_half(char *str);

void print_array(int *a, int n);

char *_strcpy(char *dest, char *src);

int _atoi(char *s);

#endif /*end macro holberton_h*/
