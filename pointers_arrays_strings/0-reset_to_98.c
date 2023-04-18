#include <stdio.h>

/**
 *
 * main - Function that takes a pointer to an int as paramete to 98
 *
 * Return: always 0 (Success)
 */
int main(void)
{
		int n;
		int *p;

		n = 402;
		{
			printf("n=%d\n", n);
		}

		p = &n;
		*p = 98;
		{
			printf("n=%d\n", n);
		}
		return (0);
}
