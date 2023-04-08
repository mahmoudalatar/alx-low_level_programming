#include <stdio.h>
#include <string.h>

/**
 * reverse_c - print string in reverse
 * @s: the string will be print
 * @i: index
 * Return: int
 */

int reverse_c(int i, char *s)
{
	if (i == 0)
		return (0);
	printf("%c", s[i]);
	i--;
	reverse_c(i, s);
	return (i);
}

/**
 * _print_rev_recursion - print string in reverse
 * @s: the string will be print
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	int z = strlen(s) - 1;

	reverse_c(z, s);
	putchar('\n');
}
