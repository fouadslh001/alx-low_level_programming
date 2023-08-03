#include "main.h"
#include <stdio.h>

/**
 * get_bit - function to get the value of a bit at a given index you give
 * @n: number to evaluate for
 * @index: index starting on 0, of the bit, we are  want get
 * Return: Value of bit at index, or -1 if error happen or fail
 */



int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
