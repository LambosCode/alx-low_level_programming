#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	int cnt = 0;
	list_t *ptr = malloc(sizeof(list_t));

	if (!ptr)
		return (0);

	if (ptr)
	{
		while (str[cnt++] != 0)
			;
		ptr->str = malloc(cnt + 1);
		if (!ptr->str)
			return (0);
		cnt = 0;

		while (str[cnt] != 0)
		{
			ptr->str[cnt] = str[cnt];
			cnt++;
		}
		ptr->str[cnt] = 0;
		ptr->len = cnt;
		ptr->next = 0;
	}

	if (!*head)
		*head = ptr;
	else
	{
		(*ptr).next = *head;
		*head = ptr;
	}
	return (*head);
}
