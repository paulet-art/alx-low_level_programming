#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string
 * @str:parameter string
 * Return: Always 0
 */
void _puts(char *str)
{
	*str = str;

	while (*str != '\0')
	{
		printf("%c", *str);
		str++;
	}
}
