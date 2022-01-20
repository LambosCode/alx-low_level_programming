#include "main.h"

/**
 * _isalpha - checks for uppercase and lowercase
 * @c: accepts integer both signed and non signed and relates it to ascii
 * Return: if 1 then error and quits program
 */

int _isalpha(int c)
{
	int alpha, alpha1;

	for (alpha = 97, alpha1 = 65; alpha <= 122 && alpha1 <= 90; alpha++, alpha1++)
	{
		if (c == alpha || c == alpha1)
			return (1);
	}
	return (0);
}
