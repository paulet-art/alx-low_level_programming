#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s:parameter
 * Return: Always 0
 */
void print_rev(char *s)
{
	char *p = s;

while (*(p + 1) != '\0')
	p++;
while (p > s)
{
	char temp = *p;
	*p-- = *s;
	*s++ = temp;
}
}
