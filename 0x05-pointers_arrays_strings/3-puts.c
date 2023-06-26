#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _puts - print string fonction
 * @str: character pointer
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar("\n");
}
