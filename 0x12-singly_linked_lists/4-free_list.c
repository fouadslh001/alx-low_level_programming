#include "lists.h"

/**
 * free_list - this function will frees all elements in a linked list
 * @head: pointer to head element of list
 * Return: 0 or void
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
