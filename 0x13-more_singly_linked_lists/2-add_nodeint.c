#include "lists.h"
#include <stdlib.h>


/**
 * add_nodeint - adds new node to the beginning of node linked listint_t list
 * @head: current place that point to the first node list
 * @n: integer of the new beginning node to add to list
 * Return: pointer of the current position node
 */



listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
