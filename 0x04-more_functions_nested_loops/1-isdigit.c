#include "main.h"

/**
 * _isdigit - functions that check if an input is digit
 * @c: int type param
 * Return: 1 if digit, else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')

		return (1);

	else
		return (0);
}
