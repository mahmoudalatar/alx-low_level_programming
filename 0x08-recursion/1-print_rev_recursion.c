#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - print string in reverse
 * @s: the string will be print
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	int i;
	int z = strlen(s);

	for (i = z; i > 0; i--)
	{
		printf("%c", s[i]);
	}
	putchar('\n');
}
