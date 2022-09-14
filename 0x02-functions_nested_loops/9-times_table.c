#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: Always 0
 */
void times_table(void)
{
	int n;
	int i;

	scanf("%d", &n);
	for (i = 1; i <= 10; ++i)
	{
		_putchar("%d * %d = %d \n", n, i, n * i);
	}
}
