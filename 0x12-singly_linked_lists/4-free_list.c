#include "lists.h"

void free_list(list_t *head)
{
	list_t *tmp;

	if (!head)
		return;
	while (head)
	{
		tmp = head;
		head = (*head).next;
		free(tmp);
	}
}
