#include "lists.h"
/**
 * get_nodeint_at_index - a function thats returns nth node of aa linked list
 * @head: head of the list the point to the first node in our list
 * @index: which node liste to stop in position
 * Return: pointer to the nth node
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
