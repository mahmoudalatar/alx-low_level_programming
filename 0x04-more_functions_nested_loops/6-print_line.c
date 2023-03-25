#include <stdio.h>

/**
 * print_line - draws a straight line
 * @n: numbers of lines
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}

	putchar('\n');
}
