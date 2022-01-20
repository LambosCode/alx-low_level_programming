#ifndef LIST_T
#define LIST_T
#include <stdlib.h>

struct list
{
	char *str;
	int len;
	struct list *next;
};

typedef struct list list_t;

list_t *add_node_end(list_t **head, const char *str);
list_t *add_node(list_t **head, const char *str);
size_t print_list(const list_t *h);
void free_list(list_t *head);
size_t list_len(const list_t *h);


int _strlen(char *s);

#endif /* LIST_T */
