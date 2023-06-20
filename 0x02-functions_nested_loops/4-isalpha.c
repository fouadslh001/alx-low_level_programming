#include "main.h"

/**
 * _isalpha - entry point for this programe
 * @c: ascii code
 * Return: 0 mean sucssees
 */

int _isalpha(int c);
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
