#include <stdio.h>
int chk_x(int x);

/**
 * main - checks numbers of multiple of 3 and 5
 *
 * Return: on success 0
 */

int main(void)
{
	int x = 1, y;

	for (; x <= 100;)
	{
		y = chk_x(x);
		if (y == 0)
			printf("%d ", x);
		x++;
	}
	return (0);
}

/**
 * chk_x - checks numbers
 * @x: numbers to check for if divisible by 3 1n3 5
 * Return: 1 on true and 0 on false
 */

int chk_x(int x)
{
	int y = 0;

	if (x % 15 == 0)
	{
		printf("FizzBuzz ");
		y = 1;
	}
	else if (x % 3 == 0)
	{
		printf("Fizz ");
		y = 1;
	}
	else if (x % 5 == 0)
	{
		if (x == 100)
			printf("Buzz\n");
		else
			printf("Buzz ");
		y = 1;
	}
	else
		x = x;
	if (y == 1)
		return (1);
	return (0);
}
