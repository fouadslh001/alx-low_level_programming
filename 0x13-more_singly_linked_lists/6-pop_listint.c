#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function will dealate node list and returns itts contents
 * @head: head of thes list
 * Return: contents of thee head
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *current, *tmp;

	if (head == NULL)
		return (0);
	tmp = current = *head;
	if (*head)
	{
		i = current->n;
		*head = current->next;
		free(tmp);
	}
	else
		i = 0;
	return (i);
}
