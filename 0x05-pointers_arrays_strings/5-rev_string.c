#include "main.h"
#include <string.h>
/**
 * rev_string - reverses a string 
 * @s:parameter
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i,len,temp;

	for(i = 0; i < len/2;i++)
	{
	temp = str[i];
	str[1] = str[len - i -1];

	str[len - i - 1] = temp;
	}
	_putchar('\n')
}
