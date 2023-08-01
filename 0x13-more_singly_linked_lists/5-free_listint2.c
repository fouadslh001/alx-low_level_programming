#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that will frees a listint_t list in memory.
 * @head: double pointer to the head of list node.
 */


void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}
