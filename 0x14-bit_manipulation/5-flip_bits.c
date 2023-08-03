#include "main.h"
#include <stdio.h>

/**
 * flip_bits -functions  flip bits for convert one number to another one
 * @n: first number to convert with flip
 * @m: second number to convert to and flipet
 * Return: number of bits that we need for flipping
 *
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}
