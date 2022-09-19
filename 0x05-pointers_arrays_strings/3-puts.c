#inclde "main.h"
/**
 * _puts - prints a string
 * @str:parameter string
 * Return: Always 0
 */
void _puts(char *str)
{
	p = str;

	while (*p != '\0')
	{
		_putchar("%c", *p);
		p++;
	}
}
