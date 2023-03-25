#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, and replac number
 * multiples with 3 with fizz and with 5 buzz and with both fizzbuzz
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);

		putchar(i == 100 ? '\n' : ' ');
	}

	return (0);
}
