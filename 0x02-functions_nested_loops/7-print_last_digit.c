#include "main.h"

/**
 * print_last_digit -  prints thelast digit of a number
 * @n: the number will be used in the function
 * Return: the output of the function
 */

int print_last_digit(int n)
{
	if(n < 0)
		n = -n;
	return n % 10;
}
