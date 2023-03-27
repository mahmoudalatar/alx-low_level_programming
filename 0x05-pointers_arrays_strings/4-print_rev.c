#include <stdio.h>
#include <string.h>

/**
 * print_rev - print a string in reverse
 * @s: string will be printed
 * Return: nothing
 */

void print_rev(char *s)
{
	int i;

	for (i = strlen(s); i >= 0; i--)
	{
		if (s[i] != 0)
			printf("%c", s[i]);
	}
	putchar('\n');
}
