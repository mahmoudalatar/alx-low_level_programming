#include <string.h>

/**
 * rev_string - reverse a string
 * @s: the string will be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	char a, b;
	int i;
	int x = sizeof(s);

	for (i = 0; i < x; i++)
	{
		a = s[i];
		b = s[strlen(s) - i - 1];
		s[i] = b;
		s[strlen(s) - i - 1] = a;
	}
}
