#include "main.h"
#nclude <string.h>
/**
 * *_strcat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return: Always 0
*/

char *_strcat(char *dest, char *src)
{
	dest = "abcdef";
	src = "ghijkl";

	strcat(dest, src);

	_putchar(dest);
	_putchar(src);

	return (0);
}
