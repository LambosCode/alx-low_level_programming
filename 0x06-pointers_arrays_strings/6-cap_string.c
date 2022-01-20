#include "main.h"

/**
 * cap_string - capitalzes each word if lowercase
 * @s: words to check
 * Return: after modification of s, return s
 */

char *cap_string(char *s)
{
	int i = 0;
	char snt[] = {32, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (!s)
		return (0);

	if (s[0] >= 97 && s[0] <= 122)
		s[0] -= 32;

	while (s[i] != 0)
	{
		if (s[i] == 10 || s[i] == 9)
		{
			i++;
			if (s[i] >= 97 && s[i] <= 122)
				s[i] -= 32;
		}
		else if (matcher(s[i], snt) == 0)
			i++;
		else if (s[i] == ',')
			i++;
		else if (matcher(s[i], snt) == 1)
		{
			i++;
			if (s[i] >= 97 && s[i] <= 122)
				s[i] -= 32;
		}
		else
			i++;
	}

	return (s);
}

/**
 * matcher - matches against a character
 * @x: a character
 * @snt: some characters stored
 *
 * Return: (1) a successful match
 */

int matcher(char x, char *snt)
{
	int kp = 0;

	if (!snt)
		return (-9);
	while (snt[kp] != 0)
	{
		if (x == snt[kp])
			return (1);
		kp++;
	}
	return (0);
}
