#include "main.h"
/**
 * puts_half - prits hal the string
 * @str:parameter
 * Return:Always 0
 */
void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i ++)
		putchar(10);
}
/**
 * _strlen -length of string
 * @s:parameter
 * Returm:Always 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
