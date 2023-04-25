#include "main.h"
#include <stdio.h>

/**
 * puts_half - function that prints half a string
 * @str: string to be halved
 * Return: half a string
 */
void puts_half(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i++;
		str++;
	}

	str = str - (i / 2);
	while (*str != '\0')
	{
	putchar(*str);
	str++;
	}

	putchar('\n');
}
