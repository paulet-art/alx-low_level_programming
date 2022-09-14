#include "main.h"
#include <stdio.h>
/**
 * times_table- prints the 9 times table
 *
 * Return: Always 0
 */
void times_table(void)
{
	int i = 1;

	do {
		printf("9 * %d = %d\n", i, 9 * i);
		i++;
	} while (i <= 10);
}
