#include "main.h"

 /**
 * _strncpy - copy a string from index of 0 of 'dest'
 * @src: string
 * Description: return the required result
 * Return: return char pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		i++;
	}
	return (dest);
}
