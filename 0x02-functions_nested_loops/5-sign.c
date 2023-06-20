#include "main.h"

/**
 * print_sign - entry point for this programe
 * @n: the input number as ion integer
 * Return:  grater that 0 means , and -1 less that zero and zero is 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
