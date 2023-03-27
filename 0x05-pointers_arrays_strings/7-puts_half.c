#include <stdio.h>
#include <string.h>

/**
 * puts_half - print the second half of the string
 * @str: the string will be printed
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, l;
	int e = strlen(str);

	if (e % 2 != 0)
	{
		l = (strlen(str) - 1) / 2;
		for (i = l; i < e; i++)
		{
			putchar(str[i]);
		}
	}
	else
	{
		for (i = e / 2; i < e; i++)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}
