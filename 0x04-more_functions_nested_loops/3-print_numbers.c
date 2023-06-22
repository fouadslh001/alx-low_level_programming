#include "main.h"

/**
 * print_numbers - this entry point
 * @c: print number digits
 * Return: 0 means otherwise  and 1 means digits
 */

void print_numbers(void)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
		_putchar("\n");
	}
	else
	{
		return (0);
		_putchar("\n");
	}
}
