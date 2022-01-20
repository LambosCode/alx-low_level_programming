#include "main.h"

/**
 * rev_string - prints just like printf
 * @s: collect the system or user input
 */

void rev_string(char *s)
{

	int length = 0, ct;
	int cnt = 0;
	char wrd, tmp;

	while (s[length] != '\0')
		length++;

	ct = length / 2;
	if (length % 2 == 0)
		ct -= 1;

	for (; ct >= 0; ct--, length--, cnt++)
	{
		if (*(s + length) == '\0')
			length -= 1;

		tmp = s[cnt];
		wrd = *(s + length);
		s[cnt] = wrd;
		s[length] = tmp;

		if (length <= 0)
			s[cnt + 1] = '\0';
	}
}
