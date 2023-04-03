#include <string.h>

/**
 * _strchr - locates a character in a string
 * @s: the string will be searched
 * @c: the character will search by
 * Return: c as pointer if find the character or NULL if not
 */

char *_strchr(char *s, char c)
{
	char *r = strchr(s, c);

	if (r)
		return (r);
	else
		return (NULL);
}
