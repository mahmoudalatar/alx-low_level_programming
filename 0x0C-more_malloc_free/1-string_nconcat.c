#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: scond string
 * @n: index of s2
 * Return: pointer or null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s, i;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= sizeof(s2))
		s = strlen(s2);
	else
		s = n;
	new_str = malloc(strlen(s1) + s);
	if (new_str == NULL)
		return (NULL);
	strcpy(new_str, s1);
	for (i = 0; i < s; i++)
	{
		new_str[strlen(s1) + i] = s2[i];
	}
	new_str[strlen(new_str)] = '\0';
	return (new_str);
}
