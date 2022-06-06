#include <stdio.h>
/**
 * main - Prints all integers in base 10 stating from 0
 *
 * Returns: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	printf("\n");

	return (0);
}
