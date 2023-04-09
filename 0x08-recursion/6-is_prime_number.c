/**
 * calc_prime -  calc prime number
 * @n: number will be calc
 * @i: iterator
 * @c: checker if only 1 that mean the number is prime
 * Return: int prime (n)
 */

int calc_prime(int n, int i, int c)
{
	if (i * i == n)
		c = c + 1;
	if (n < i)
		return (c);

	return (calc_prime(n, i + 1, c));
}

/**
 * is_prime_number - check if the number is prime
 * @n: the number will be checked
 * Return: 1 if prime 0 if not
 */

int is_prime_number(int n)
{
	int x;

	if (n <= 1)
		return (0);
	x = calc_prime(n, 1, 0);
	if (x)
		return (0);
	else
		return (1);
}
