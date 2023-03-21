#include<stdio.h>

void print_alphabet(void);

/**
 * main - calling print_alphabet()
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet -  print alphabet
 * Return: nothing (void)
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		putchar('\n');
	}
		return;
}
