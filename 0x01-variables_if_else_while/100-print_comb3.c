#include <stdio.h>
/**
 * main - entry point
 * Return: 0 means sucsses
 */

int main(void)
{
	int x = 1;
	int b = 14;
	int c = 23;
	int d = 34;
	int e = 45;
	int f = 56;
	int g = 67;
	int h = 78;
	int k = 89;

	while (x < 14 && b < 20 && c < 30 && d < 40 && e < 50 && f < 60 && g < 70 && h < 80 && k < 90)
	{
		printf("%02d, %02d, %02d, %02d, %02d, %02d, %02d, %02d, %02d", x, b, c, d, e, f, g, h, k);
	{
		putchar(',');
		putchar(' ');

	}
		x++;
		b++;
		c++;
		d++;
		e++;
		f++;
		g++;
		h++;
		k++;

	}

	putchar('\n');

	return (0);


}
