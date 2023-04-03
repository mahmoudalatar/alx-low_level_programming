#include <string.h>

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: the main string will be search in
 * @accept: the string will be use to search for
 * Return: a pointer or null
 */

char *_strpbrk(char *s, char *accept)
{
	char *r = strpbrk(s, accept);

	if (r)
		return (r);
	else
		return (NULL);
}
