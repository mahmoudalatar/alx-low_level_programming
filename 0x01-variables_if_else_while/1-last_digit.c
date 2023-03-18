#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 *  main - print random number and cheack last digit if bigger than 6 and more than 5 or 0
 *  Return: 0
 */
int main(void)
{
	int n;
	int last_n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_n = n % 10;
	if(last_n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_n);
	}
	else if(last_n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_n);
	}
	else if(last_n < 6)
	{
		printf("Last digit of %d is %d and is lass than 6 and not 0\n", n, last_n);
	}
	return (0);
}
