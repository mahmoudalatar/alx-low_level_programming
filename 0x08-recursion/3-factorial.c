/**
 * factorial - returns the factiorial of a given number
 * @n: the number will be use to get the factiorail
 * Return: int of factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);
	return (n * factorial(n - 1));
}
