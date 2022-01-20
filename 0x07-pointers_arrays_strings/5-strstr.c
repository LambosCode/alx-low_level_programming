#include "main.h"

/**
 * _strstr - substring to check against string
 * @haystack: strings of words
 * @needle: search word
 * Return: segment words searched
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, x = 0, cnt = 0;

	while (haystack[x] != 0)
	{
again:
		if (haystack[x] != needle[i] && haystack[x] != 0)
		{
			x++;
			cnt++;
			goto again;
		}
		else if (haystack[x] == needle[i] && needle[i] != 0 && haystack[x] != 0)
		{
			const int j = cnt;

			x++;
			i++;
			if (haystack[x] == needle[i])
			{
				if (needle[i + 1] == 0)
				{
					int i = 0;

					for (; i < j; i++)
						haystack++;
					return (haystack);
				}
				goto again;
			}
			else
			{
				i = 0;
				cnt = x;
				goto again;
			}
		}
		else if (needle[i] == 0)
			return (haystack);
	}
	return ('\0');
}
