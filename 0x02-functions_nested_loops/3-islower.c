#include "main.h"

/**
 * _islower - entry point for this programe
 * @c: ascii code
 * Return: 0 mean sucssees
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
