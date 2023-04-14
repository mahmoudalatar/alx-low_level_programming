#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: starting number
 * @max: ending number
 * Return: null or pointer
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i <= (max - min) - 1; i++)
		arr[i] = min + i;
	return (arr);
}
