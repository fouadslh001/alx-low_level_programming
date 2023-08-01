#include "lists.h"

/**
 * reverse_listint - define function will reverse the print
 * @head: describe argument that point to the first node
 * Return: its return the 0 means sucsese of the reverse
 */


listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	if (*head == NULL)
		return (NULL);

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
