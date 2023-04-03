#include <string.h>

/**
 * _memcpy - copies memeory area
 * @dest: the array wil copy to
 * @src: the array will copy from
 * @n: size need to be copyed
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
