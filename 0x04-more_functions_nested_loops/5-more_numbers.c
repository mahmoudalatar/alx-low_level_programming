#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: nothing (void)
 */

void more_numbers(void)
{
	int i, y;

	for (i = 0; i < 10; i++)
	{
		for (y = 0; y < 15; y++)
		{
			putchar(y + '0');
		}
		putchar('\n');
	}

	putchar('\n');
}
