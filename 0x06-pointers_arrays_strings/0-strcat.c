#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: the string will be concate to
 * @src: the string will be concate from
 * Return: char pointer
 */

char *_strcat(char *dest, char *src)
{
	*dest = *strcat(dest, src);
	return (dest);
}
