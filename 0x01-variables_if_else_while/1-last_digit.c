#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/*betty style doc for function main goes there */
int main(void)
{
	int c, n;

	srand(time(0));
	n = rand() - RAND MAX / 2;
	/* your code goes there */
	printf("Ten random  numbers in [1,100]\n");
	for (c = 1; c <= 10; c++) {
	 n = rand() % 100 + 1;
	 printf("%d\n", n);
	}
       return 0;
}       
