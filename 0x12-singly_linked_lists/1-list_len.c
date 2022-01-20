#include "lists.h"

size_t list_len(const list_t *h)
{
	int cnt = 0;

	if (!h)
		return (0);

	while (h)
	{
		h = h->next;
		cnt++;
	}

	return ((size_t)cnt);
}
