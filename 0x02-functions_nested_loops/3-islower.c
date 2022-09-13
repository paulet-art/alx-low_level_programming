#include "main.h"
/**
 * int _islower(int c) - checks for lowercase
 * Return : 1 if c is lowercase
 * Return : 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z)
	{
		return (1);
	}
	else
		return (0);
}
