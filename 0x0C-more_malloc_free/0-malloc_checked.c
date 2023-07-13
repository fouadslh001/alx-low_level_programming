#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_ - function that allocates memory using malloc
 * @b: size to allocated
 * Return: pointer to allocated memory or exit with 98
 */

void *malloc_checked(unsigned int b)
{
	int *p;
	int size;

	p = malloc(sizeof(int) * size);

	if (p = NULL)
	{
		exit(98);
	}

	else
		return (p);


}
