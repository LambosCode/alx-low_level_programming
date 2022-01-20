#include <stdio.h>
#include "lists.h"

/**
 * print_list - List is a structure containing some data and a pointer
 * @h: this is a pointer
 * Return: number of pointers
 */

size_t print_list(const list_t *h)
{
	unsigned int cnt = 0;

	if (!h)
		return (0);

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = (*h).next;
		cnt++;
	}

	return (cnt);
}
