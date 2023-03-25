#include <stdio.h>

/**
 * print_diagonal -  draws a diagonal line
 * @n: number of times the character \ should be printed
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
	}
	if (n <= 0)
		putchar('\n');
}
