#include <ctype.h>
#include "main.h"

/**
 * _islower -  checks for lowercase character
 * Return: 1 if character is lowercase and 0 if not
 */

int _islower(int c)
{	
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
