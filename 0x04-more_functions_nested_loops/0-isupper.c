#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - use to checks for uppercase character
 * @c: the character will be checked
 * Return: 1 if c is uppercase or 0 if not
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
		return (0);
}
