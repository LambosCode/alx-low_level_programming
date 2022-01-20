#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;
	head = 0;
	int h = list_len(head);

	add_node_end(&head, "Anne");
	add_node_end(&head, "Corbin");
	add_node_end(&head, "Daniel");
	add_node(&head, "Harvid");
	print_list(head);
	int l = (int)list_len(head);

	printf("lenght of nodes %d - first node: %d", l, h);
	free_list(head);
	head = NULL;

	return (0);
}
