#include <stdio.h>
/**
 * main - prints lowercase alphabets
 * return:Always (success)
 */
void print_alphabet(void);
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);

}
