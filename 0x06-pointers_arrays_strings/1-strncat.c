#include "main.h"

/**
 *_strncat - concatenate two strings but add inputted number of bytes
 *@dest: string parameter
 *@src: string parameter
 *@n:integer parameter
 *Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
