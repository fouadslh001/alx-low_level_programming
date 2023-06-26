#include "main.h"
#include <stdlib.h>

/**
 * swap_int - will swap to integer fonction
 * @a: integer pointer 1
 * @b: integer pointer 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
