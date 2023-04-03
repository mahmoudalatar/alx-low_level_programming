#include <string.h>

/**
 * _strstr - function that locates a substring
 * @haystack: the main string will be search in
 * @needle: the string will be use to search for
 * Return: the much reslut as pointer or null
 */

char *_strstr(char *haystack, char *needle)
{
	char *r = strstr(haystack, needle);

	if (r)
		return (r);
	else
		return (NULL);
}
