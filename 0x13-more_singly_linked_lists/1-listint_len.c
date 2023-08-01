#include "lists.h"

/**
 * listint_len - functio will returns number of elements in a linked list node.
 * @h: singly linked list
 * Return: number of nodes on linked list listint_len.
 */


size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
