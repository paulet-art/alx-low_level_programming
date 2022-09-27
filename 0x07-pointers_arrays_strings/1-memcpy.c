#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest:destination area
 * @src:source area
 * @n:bytes
 * Return: Nothing
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
