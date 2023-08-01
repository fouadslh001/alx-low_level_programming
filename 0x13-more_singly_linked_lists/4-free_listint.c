#include "lists.h"
#include <stdlib.h>



/**
 * free_listint - define function will free our memory location node
 * @head: describe argument position that point to the first node
 */


void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
