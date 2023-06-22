#include "main.h"

/**
 * _isupper - this entry point
 * @c: the caracter to print
 * Return: 0 means otherwise  and 1 means digits
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
