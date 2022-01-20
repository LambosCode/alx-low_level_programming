#include <stdio.h>
#include "main.h"

/**
 * main - start of program for multiplication by user
 *
 * @argc: number of arguments
 * @argv: entered numbers by use
 *
 * Return: on success (0), otherwise (1) for failure
 */

int main(int __attribute__((unused)) argc, char __attribute__((unused)) **argv)
{
	int rslt = 0;

	argc -= 1;

	while (argc > 0)
	{
		if (_isdigit(argv[argc]) == 1)
		{
			rslt += _atoi(argv[argc]);
			argc--;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", rslt);

	return (0);
}

/**
 * _atoi - convert string numbers to integers noting the negative sign
 * @s: string stored
 * Return: converted string of numbers
 */

int _atoi(char *s)
{
	int x = 1, unit = 10;

	while (s)
	{
		if (*s == 0)
			return (0);

		if (*s == 45)
		{
			x *= -1;
			s++;
		}

		if (*s >= 48 && *s <= 57)
		{
			x *= (*s - 48);
again:
			if (s[1] >= 48 && s[1] <= 57)
			{
				s++;
				x *= unit;
				if (x > 0)
					x += (*s - 48);
				else
					x += ((*s - 48) * -1);
				goto again;
			}
			else
				return (x);
		}
		if (*s != 45)
			s++;
	}
	return (0);
}

/**
 * _isdigit - checks for digits
 * @s: ascii character to validate with
 * Return: 1 for true, 0 for false
 */

int _isdigit(char *s)
{
	int i = 0;

	for (; *s != 0; s++)
	{
		if (*s >= 48 && *s <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}
