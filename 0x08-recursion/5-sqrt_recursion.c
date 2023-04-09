/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number will be use to get square root
 * Return: int
 */

int calc_sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (calc_sqrt(n, 0));
}

/**
 * calc_sqrt - calc and returns the natural square root of a number
 * @n: the number will be use to get square root
 * @i: conter
 * Return: int
 */

int calc_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (calc_sqrt(n, i + 1));
}
