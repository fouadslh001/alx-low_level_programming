#include "main.h"

/**
 * _abs - entry point for this programe
 * @i: the input number as ion integer
 * Return:  absolute value
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
	_putchar('\n');
}
