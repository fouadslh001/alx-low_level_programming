#include "main.h"

/**
* print_diagonal - this function print diagonal line '\'
* @n: number of caracter shold printed
* Return: void
*/

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; n > i; i++)
		{

		for (j = 0; j < n; j++)
		_putchar(' ');

		_putchar('\\');
		_putchar('\n');
		}
		
	}
	else
		_putchar('\n');
}
