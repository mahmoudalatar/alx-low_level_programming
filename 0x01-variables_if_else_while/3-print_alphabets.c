#include<stdio.h>

/**
 * main - print alphabet in lower and uppercase character
 * Return: 0
 */
int main(void)
{
	char ch;
	char U_ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (U_ch = 'A'; U_ch <= 'Z'; U_ch++)
	{
		putchar(U_ch);
	}
	putchar('\n');
	return (0);
}
