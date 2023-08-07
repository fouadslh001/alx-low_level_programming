#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <stdlib.h>


/**
 * main - a function will Copies the content of a file to another file.
 * @ac: Argument we need to count it.
 * @av: argument will enter his values.
 * Return: 0 on succes, -1 on error or fail the processe.
 */

int main(int argc, char *argv[])
{
	printf("argc:%d, argv:%p\n", argc, (void *)*argv);
	return (1);
}
