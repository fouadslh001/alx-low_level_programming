#include "main.h"
#include <stdio.h>

/**
 * _strstr -  a function that locates a substring.
 * @haystack: an input string to search in
 * @needle: an input string to locate into string haystack
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char* _strstr(char* haystack, char* needle)
{
while (*haystack && *needle)
{
if (*haystack == *needle)
{
char* temp_h = haystack;
char* temp_n = needle;

while (*temp_h == *temp_n)
{
temp_h++;
temp_n++;
}

if (*temp_n == '\0')
return haystack;
}

haystack++;
}

	return NULL;
}
