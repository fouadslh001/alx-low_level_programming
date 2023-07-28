#include <stdio.h>

/* Using constructors in C */
void main_constructor(void) __attribute__((constructor));
/**
 * main_constructor - A constructor got  function that prints message
 * before main will runs
 * Return: 0 sucsese
 */
void main_constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
