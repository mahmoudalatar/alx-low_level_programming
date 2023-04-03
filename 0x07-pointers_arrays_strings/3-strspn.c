#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: the main array
 * @accept: the supstring
 * Reutrn: int
 */

unsigned int _strspn(char *s, char *accept)
{
	int r = strspn(s, accept);

	return (r);
}
