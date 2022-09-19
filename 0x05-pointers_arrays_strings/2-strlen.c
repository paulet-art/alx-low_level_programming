#include "main.h"
/**
 * _strlen - returns lenth of a string
 * @s:parameter string
 * Return: Always 0
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
