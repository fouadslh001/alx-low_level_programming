#include "main.h"

/**
* more_numbers - print 0-14 10 times with a new line
* Return: void
*/

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
		}
	_putchar('\n');

	}
}
