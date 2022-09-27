#include "main.h"
/**
 * _strchr - locates character in string
 * @s:parameter string
 * @c:character to locate
 * Return:Nothing
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
