#include "main.h"
#include <stdlib.h>

/**
 * _strlen - will swap to integer fonction
 * @s: character pointer
 * Return: the length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
