#include <string.h>

/**
 * _memset - fills memory with a constant byte
 * @s: name of the array
 * @b: the element will fill
 * @n: the size will be filled
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
