#include "main.h"
/**
 * print_last_digit- prints the last digit
 * @n: parameter arguement
 * Return:Always 0
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;
	_putchar('last_digit = %d',last_digit);
	return (0);
}
