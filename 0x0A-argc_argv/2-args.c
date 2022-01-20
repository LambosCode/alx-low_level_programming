#include <stdio.h>

/**
 * main - start of program
 *
 * @argc: argument count
 * @argv: argument vector for strings
 *
 * Return: on (0) success
 */

int main(int __attribute__((unused)) argc, char __attribute__((unused)) **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
