#include <string.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: the string will be capitalizes
 * Return: array of string
 */

char *cap_string(char *str)
{
	char s[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int i, j, e =  strlen(s), e2 = strlen(str);

	for (i = 0; i < e2; i++)
	{
		for (j = 0; j < e; j++)
		{
			if (str[i] == s[j])
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	return (str);
}
