#include "lists.h"
#include <stdlib.h>


/**
 * add_nodeint_end - this function adds new node in the end of list node
 * @head: current place of position linked list
 * @n: int to add to end of node list we creat
 * Return: return pointer to current position node list
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new;
	return (*head);
}
