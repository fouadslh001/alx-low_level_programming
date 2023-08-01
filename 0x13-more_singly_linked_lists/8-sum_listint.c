#include "lists.h"

/**
 * sum_listint - sums of all elements of our node list
 * @head: pointer to the head of the list
 * Return: it will return the sum of all elements in node list
 */


int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; sum += head->n, head = head->next)
		;
	return (sum);
}
