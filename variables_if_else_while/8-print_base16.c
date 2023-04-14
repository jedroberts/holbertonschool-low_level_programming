#include <stdio.h>

/**
 * main - Peints all numbers of base 16 in lowercase
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
