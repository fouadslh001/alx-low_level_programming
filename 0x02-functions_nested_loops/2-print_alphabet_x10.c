#include "main.h"

/**
 * print_alphabet_x10 - entry point for this programe
 * Return: 0 mean sucssees
 */

void print_alphabet_x10(void)
{
	char i = 'a';
	char x = 'z';
	int rp = 1;

	while (rp <= 10)
	{
	
	while (i <= x)
	{
	
	_putchar(i);
	i++;
	}

	_putchar('\n');	
	i = 'a';
	rp++;
	
	}
	
}
