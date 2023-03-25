#include <stdio.h>

/**
 * print_most_numbers - prints numbers, from 0 to 9 except 2 and 4
 * Return: nothing
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 4 && i != 2)
			putchar(i + '0');
	}

	putchar('\n');
}
