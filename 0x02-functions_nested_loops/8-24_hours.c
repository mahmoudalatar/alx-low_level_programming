#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: 0
 */

void jack_bauer(void)
{
	int n1, n2, n3, n4;

	n1 = n2 = n3 = n4 = 0;

	while (n4 <= 2)
	{
		printf("%d%d:%d%d\n", n4, n3, n2, n1);
		n1++;
		if (n1 == 10)
		{
			n1 = 0;
			n2++;
		}
		if (n2 == 6)
		{
			n2 = 0;
			n3++;
		}
		if (n3 == 10)
		{
			n3 = 0;
			n4++;
		}
		if (n4 == 2 && n3 == 4)
		{
			break;
		}
	}
}
