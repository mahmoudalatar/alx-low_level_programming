#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: size of memory will be allocates
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
		exit(98);

	return (i);
}
