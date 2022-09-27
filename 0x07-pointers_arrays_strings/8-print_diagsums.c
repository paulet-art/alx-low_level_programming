#include "main.h"
/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a:parameter
 * @size:parameter
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j, p, 1 = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + 1;
		1 += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		r += *(a + p);
	}
	printf("%i, %i\n", 1, r);
}
