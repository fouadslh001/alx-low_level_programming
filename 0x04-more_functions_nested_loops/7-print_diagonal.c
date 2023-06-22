#include "main.h"

/**
 * print_diagonal - this function print diagonal line '\'
 * @n: number of caracter shold printed 
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; n > i; i++)
		_putchar('\');
	
	}
	_putchar('\n')
}
