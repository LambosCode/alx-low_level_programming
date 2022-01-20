#include "main.h"

/**
 * main - This entry point
 *
 * Return: On success,  always 0
 *
 * Description: This is used to print
 */

int main(void)
{
	char hol_sch[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};
	int length, count = 0;

	length = sizeof(hol_sch) / sizeof(hol_sch[0]);

	for (; count < length; count++)
	{
		_putchar(hol_sch[count]);
	}

	return (0);
}
