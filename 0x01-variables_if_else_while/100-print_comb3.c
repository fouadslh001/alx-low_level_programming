#include <stdio.h>
/**
 * main - entry point
 * Return: 0 means sucsses
 */

int main(void)
{
	int x = 1;

	while (x < 90)
	{
		printf("%02d", x);
		if (x != 89)
	{
		putchar(',');
		putchar(' ');

	}
		x++;
	}

	putchar('\n');

	return (0);


}
