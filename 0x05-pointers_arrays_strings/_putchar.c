#include "main.h"
/**
 * _putchar - writes a single character to stdout
 * @c:parameter arguement
 *  
 *  Return: Always 0
 */
int _putchar(char c)
{
	return(write(1,&c,1));
}
