#include "main.h"
/**
 * _isupper -checks for uppercase character
 * @c:parameter 
 * Return: Always 0
 */
int is_upper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
