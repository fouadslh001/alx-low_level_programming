#include "main.h"

/**
* more_numbers - print 0-14 10 times with a new line
* Return: void
*/

void more_numbers(void)
{
	int i, j;

	for (j = '0'; j <= '9'; j++)
	{
		for (i = '0'; i <= '14'; i++)
			_putchar(i);
	}
	_putchar(j);
	_putchar('\n');
}
