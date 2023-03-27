#include <stdio.h>

/**
 * print_array - print array element
 * @a: the array
 * @n: number of the array
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	putchar('\n');
}
