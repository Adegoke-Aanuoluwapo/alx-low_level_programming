#include "main.h"

/**
 *_strlen- Returns the len of a string
 *@str: string. 
 *Return: return length.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
