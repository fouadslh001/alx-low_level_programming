#include <stdio.h>

/**
 * _strcmp - entry point
 *@s1: character
 *@s2: character
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}
