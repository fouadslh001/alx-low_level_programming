#include <stdio.h>

/**
 * *_strcat - entry point
 *@src: character
 *@dest: character
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;
	{
	while (*ptrr != '\0')
		ptr++;
	}

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src;
	}

	*ptr = '\0'

	return (dest);
}
