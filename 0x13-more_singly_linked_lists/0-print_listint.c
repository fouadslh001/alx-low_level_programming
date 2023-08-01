#include <stdio.h>
#include "lists.h"



/**
 * print_listint - this function will prints elements data of a list_t list
 * @h: singly linked list that will print
 * Return: the number of nodes on our linked list
 */



size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
