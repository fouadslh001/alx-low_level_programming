#include "main.h"

/**
 * print_line - this function print lines _
 * @n: number of time caracter shold printed
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; n > i; i++)
		_putchar('_');
	}
	_putchar('\n');
}
