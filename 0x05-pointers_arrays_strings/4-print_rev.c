#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_rev - print string fonction
 * @s: character pointer
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i)
	_putchar(s[--i]);

	_putchar('\n');
}
