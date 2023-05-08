#include "main.h"
#include <stdio.h>

/**
 * *_strncat - Function that concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: number of bytes in src
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest = dest + 1;
	}
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest = dest + 1;
		src = src + 1;
		n = n - 1;
	}

	*dest = '\0';

	return (result);
}
