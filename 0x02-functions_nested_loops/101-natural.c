#include <stdio.h>
/**
 * main- prints and sums multiples
 * @n :parameter arguement
 * Return: Always 0
 */
void main(int n)
{
	int sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum += n;
	}
	printf("%d\n", sum);
}
