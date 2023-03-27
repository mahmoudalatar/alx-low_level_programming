#include <string.h>

/**
 * _strcpy - copies the string pointed to by src including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @dest: the buffer pointed to
 * @src: the string pointed to by
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	return (strcpy(dest, src));
}
