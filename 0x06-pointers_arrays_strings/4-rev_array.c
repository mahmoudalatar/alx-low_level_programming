/**
 * reverse_array - reverse the content of an array of intergers
 * @a: the array
 * @n: size of the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0, j;

	while (i < n)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
		i++;
		n--;
	}
}
