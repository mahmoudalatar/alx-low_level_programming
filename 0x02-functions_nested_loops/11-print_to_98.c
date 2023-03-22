#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers form n to 98
 * @n: the number who will be used to start from it to 98
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	if (n > 98)
	{
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	}
	printf("98\n");
}
