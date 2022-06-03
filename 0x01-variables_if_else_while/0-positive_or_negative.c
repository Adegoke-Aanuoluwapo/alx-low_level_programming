nclude <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
		int n;
		srand(time(0));
		n = rand() - RAND_MAX / 2;
 	          		/* your code goes there */                                    scanf("Please input number &%d\n, n");
	            if (n < 0) {
		 printf("value of the number is: %d negative\n", n);
		    }			 
	         else if (n ==0) {
		printf("value of number is: %d zero\n", n);
		 }
		else
	         printf("value of the number is: %d positive\n", n);		

					return (0);

}
