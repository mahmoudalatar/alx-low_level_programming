#include "main.h"
#include <stdio.h>
/**
 * print_sign - prints the sign of a number
 * @n: the tested number
 * Return: 1 if greater than zero and -1 if less than zero and 0 if is zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
