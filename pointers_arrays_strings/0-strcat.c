#include "main.h"
#include <stdio.h>

/**
 * *_strcat - Function that appends src string
 * to end of dest string
 * @dest: string 1
 * @src: string 2
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest = dest + 1;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest = dest + 1;
		src = src + 1;
	}
	*dest = '\0';
	return (result);
}
