#include <stdio.h>

/**
 * main - entry point
 * Return: 0 means sucsses
 */

int main(void)
{
	int f = 0;
	int l = 10;
	char ff = 'a';
	char ll = 'f';

	while (f < l)
	{
		putchar(f + '0');
		f++;
	}

	while (ff <= ll)
	{
		putchar(ff);
		ff++;
	}

	putchar('\n');

	return (0);
}
