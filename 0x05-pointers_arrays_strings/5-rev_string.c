#include <string.h>

/**
 * rev_string - reverse a string
 * @s: the string will be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	char temp;
	int i = 0;
	int j = strlen(s) - 1;

	while (j > i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j--;
		i++;
	}
}
