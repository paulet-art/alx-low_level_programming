#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with first character
 * @str:parameter
 * Return: Always 0
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str[i] != '\0'))
	{
		_putchar("The Character at %d Index Position = %c \n", i, str[i]);
		i++;
	}
}
