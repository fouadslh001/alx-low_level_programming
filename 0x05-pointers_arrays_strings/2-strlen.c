#include "main.h"
#include <stdlib.h>

/**
 * _strlen - will swap to integer fonction
 * @c: character pointer
 * Return: the length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (len != '\0')
	{
		len++;
		*s++;
	}

	return len;
}
