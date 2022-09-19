#include "main.h"
/**
 * puts_half - prits hal the string
 * @str:parameter
 * Return:Always 0
 */
void puts_half(char *str)
{
	int i;

	_putchar("String = %s\n", str);

	*str = str;

	*(str / 2);
}
