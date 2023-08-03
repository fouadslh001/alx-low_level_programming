#include "main.h"

/**
 * set_bit - Function will sets the value of a bit, to 1 at a given index.
 * @n: Decimal number passed by pointer for n
 * @index: index the position you want to change, starting from 0
 * Return: 1 if it worked, -1 if error or fail the procese.
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 64)
		return (-1);

	for (p = 1; index > 0; index--, p *= 2)
		;
	*n += p;

	return (1);
}
