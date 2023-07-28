#include "lists.h"
#include <string.h>


/**
 * add_node - function  adds a node to the head of linked list
 * @head: pointer to a list_t pointer that points to the head of struct
 * @str: pointer to string that adds node
 * Return: pointer to new head of list, 0 on failure
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->len = length;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
