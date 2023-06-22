#include "main.h"

/**
 * _isdigit - this entry point
 * @c: the caracter to print
 * Return: 0 means otherwise  and 1 means digits
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
