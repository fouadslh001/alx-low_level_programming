#include "main.h"

/**
* print_square - this function print diagonal line '\'
* @size: is the size of the square
* Return: void
*/

void print_square(int size)
{
	int j, i;

	if (size > 0)
	{
		for (i = 0; size > i; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
