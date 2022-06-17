#include "main.h"

 /**
 * _strncpy - copy a string from index of 0 of 'dest'
 * @src: string
 * Description: return the required result
 * Return: return char pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
