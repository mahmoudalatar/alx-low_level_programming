#include <stdio.h>
#include <string.h>

/**
 * puts_half - print the second half of the string
 * @str: the string will be printed
 * Return: nothing
 */

void puts_half(char *str)
{
	int i;
	int l = strlen(str);

	if (l % 2 != 0)
	{
		l = strlen(str) - 1 / 2;
	}
	for (i = strlen(str) / 2; i < l; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
