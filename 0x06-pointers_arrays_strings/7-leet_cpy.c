#include <string.h>
/**
 * leet - encodes a tring inot 1337
 * @str: the string will be encodes
 * Return: array type char
 */

char *leet(char *str)
{
	int i = 0;

	while (str[i])
	{
		if ('a' == str[i] || 'A' == str[i])
			str[i] = '4';
		else if ('e' == str[i] || 'E' == str[i])
			str[i] = '3';
		else if ('o' == str[i] || 'O' == str[i])
			str[i] = '0';
		else if ('t' == str[i] || 'T' == str[i])
			str[i] = '7';
		else if ('l' == str[i] || 'L' == str[i])
			str[i] = '1';
		i++;
	}
	return (str);
}
