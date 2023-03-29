#include <string.h>

/**
 * _strncpy - copies two strings
 * @dest: the string will be copy to
 * @src: the string will be copy from
 * @n: maximum number of characters will be copied
 * Return: char pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	dest[(strlen(dest))] = '\0';
	return (dest);
}
