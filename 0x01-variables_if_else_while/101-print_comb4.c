#include <stdio.h>
/**
 * main-prints all possible combinations of two two-digit numbers
 *
 * Return:Always (success)
 */
int main(void)
{
	int i,j,k;

	for(i = 0; i <= 9; i++)
	{
		for(j = 1; j <= 9; j++)
		{
			for(k = 1; k <= 9; k++)
			{
				if(k > j && k > i)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
						if(i !=7)
						{
							putchar(',');
							putchar(' ');
						}
				}
			}
		}
	}
	putchar('\n');
	return(0);
}
