#include "lists.h"
#include <stdio.h>

/**
 * print_list - this function is prints linked list
 * @h: pointer for a head of list
 * Return: i will get number of nodes in list as size_t
 */
size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		nodes++;
	}
	return (nodes);
}
