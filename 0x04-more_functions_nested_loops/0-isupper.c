#include "main.h"
#include <stdio.h>

/**
 * _isupper -check the code if the alphabeth is upper.
 * @c: The character to be checked
 *
 * Return: 1 if the alphabeth is uppercase and 0 if the alphabeth is lower.
 */

int _isupper(int c)
{

	if ((c >= 'A')  && (c <= 'Z'))

		return (1);

	else

		return (0);
}
