#include "main.h"
#include <stdio.h>

/**
 * puts2 - function that prints every other character
 * of a string, starting with 1st character
 * @str: string with the characters
 * Return: every other character of str
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			putchar(str[i]);
		else
			continue;
	}
	putchar ('\n');
}
