#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

	int main(void)
	{
	printf("Size of a char: %lu byte(s)\n", (long int)sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (long int)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (long int)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", (long int)sizeof
			(long long int));
	printf("Size of a float: %lu byte(s)\n", (long int)sizeof(float));

	return (0);
	}
