#include "main.h"
/**
 * _islower - checks for lowercase
 * @c : parameter int arguement
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
