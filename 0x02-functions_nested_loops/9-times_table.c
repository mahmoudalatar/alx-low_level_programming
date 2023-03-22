#include "main.h"
#include <stdio.h>

/**
 * times_table - print times table
 * Return: void
 */

void times_table(void)
{
	int i, y;

	for (i = 0; i <= 9; i++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (i * y > 9 || y == 0)
			{
				if (y != 9)
					printf("%d, ", i * y);
				else
					printf("%d", i * y);
			}
			else
			{
				if (y != 9)
					printf(" %d, ", i * y);
				else
					printf(" %d", i * y);
			}
		}
		printf("\n");
	}
}
