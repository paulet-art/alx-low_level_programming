#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *int _abs(int) -  computes the absolute value of an integer
 * @c: parameter arguement
 * Return: Always 0
 */
int _abs(int c)
{
	if (c >= 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
