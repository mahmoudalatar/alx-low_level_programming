#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: string will be printed
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
		i++;
	}
	putchar('\n');
}
