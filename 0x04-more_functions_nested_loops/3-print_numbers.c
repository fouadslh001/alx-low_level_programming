#include "main.h"

/**
 * print_numbers - this entry point
 * Return: 0 means otherwise and 1 means digits
 */

void print_numbers(void)
{
	int c = 0;

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
		_putchar("\n");
}
