#include <stdio.h>
#include "main.h"

/**
* _puts_recursion - prints a string, followed by a new line
* @s: string to print 
*
* Return: nothing
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
	puthcar(*s);
	_puts_recursion(s + 1);
	}
	else
	{_putchar('\n');
	}
}
