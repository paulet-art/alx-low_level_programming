#include "main.h"
/**
 * main - prints lowercase alphabets
 * return:Always (success)
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
