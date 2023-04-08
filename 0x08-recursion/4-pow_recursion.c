#include <math.h>
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the number will be raised
 * @y: the number will be used to raise x
 * Return: x as int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));

}
