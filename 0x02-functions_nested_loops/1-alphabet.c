#include "main.h"

/**
 * 1-alphabet.c - entry point
 * Description: alphabet
 * Return: 0 mean sucssees
 */

void print_alphabet(void)
{
	char i = 'a';
	char x = 'z';

	while (i <= x)
		{
			_putchar(i);
			i++;
		}
	_putchar('\n');
	return (0);
}
