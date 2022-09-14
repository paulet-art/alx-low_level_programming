#include <stdio.h>
/**
 * main - prints and sums multiples 3,5
 * @n :parameter arguement
 * Return: Always 0
 */
int main(void)
{
	int sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
