#include "main.h"

/**
* rot13 - encodes a string into rot13
* @s: string to be encoded
*
* Return: encoded string
*/

char *rot13(char *s)
{
	int cnt = 0;

	while (*s != 0)
	{
		while ((*s >= 65 && *s <= 90) || (*s >= 97 && *s <= 122))
		{
			if ((*s - 13 >= 65 && *s < 90) || *s - 13 >= 97)
			{
				*s = *s - 13;
				s++;
				cnt++;
				continue;
			}
			*s = *s + 13;
			s++;
			cnt++;
		}
		s++;
		cnt++;
	}
	s = s - cnt;
	return (s);
}
