/**
 * swap-int - swaps the value of two integers
 * @a: first int
 * @b: second int
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
