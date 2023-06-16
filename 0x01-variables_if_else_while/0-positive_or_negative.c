#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* assign a random number to the variable */

/**
 * main - entry point
 * Return: the return is 0 that means its sucsese
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

       	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
