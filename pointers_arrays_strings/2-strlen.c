#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that return the length of a string
 * @s: string to get the length of
 * Return: the length of @s
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
