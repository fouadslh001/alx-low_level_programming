#include "main.h"

/**
 * print_numbers - this entry point
 * Return: 0 means otherwise and 1 means digits
 */

void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		_putchar('0' + n);
		n++;
	}
		_putchar("\n");
}
