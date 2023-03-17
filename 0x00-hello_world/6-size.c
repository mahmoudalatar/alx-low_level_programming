#include <stdio.h>

/**
 * main - print sizeof various types
 * Return: 0
 */
int main(void)
{
	int i;
	char c;
	float f;

	printf("Size of a char: %lu byte(s)/n", (unsigned)sizeof(c));
	printf("Size of a int: %lu byte(s)/n", (unsigned)sizeof(i));
	printf("Size of a int long: %lu byte(s)/n", (unsigned long) sizeof(i));
	printf("Size of a long long int: %lu byte(s)/n", (unsigned long long) sizeof(i));
	printf("Size of a float: %lu byte(s)/n", (unsigned float) sizeof(f));
	return (0);
