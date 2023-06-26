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
	while (*str != '\0')
	{
		puts("*str");
		str++;
	}

	puts("\n");
}
