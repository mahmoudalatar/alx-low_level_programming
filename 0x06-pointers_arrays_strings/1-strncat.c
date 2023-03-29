#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: the string will be concate to
 * @src: the string will be concate from
 * @n: maximum number of characters to be appended
 * Return: char pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	dest[(strlen(dest))] = '\0';
	return (dest);
}
