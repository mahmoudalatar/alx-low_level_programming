#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: the string will be concate to
 * @src: the string will be concate from
 * Return: char pointer
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	dest[(strlen(dest))] = '\0';
	return (dest);
}
