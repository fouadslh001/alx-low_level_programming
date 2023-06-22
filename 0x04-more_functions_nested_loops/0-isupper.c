#include "main.h"

/**
 * _isupper - this entry point
 * @c: the caracter to print
 * Return: 0 means otherwise  and 1 means upercase
 */

int _isupper(int c)
{
	if (c <= 65 && c >= 90)
	{
		_putchar("%c", c);
	}
	return (1);
}
