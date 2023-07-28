#include "lists.h"

/**
 * list_len - A function  will gets numbers nodes of linked list
 * @h: head of linked list
 * Return: the number of nodes as size_t
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
