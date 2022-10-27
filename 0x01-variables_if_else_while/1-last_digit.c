#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main -Entry point
 *
 * Print a random number and tells if it last digit is postive or not
 *
 * Return: Always 0 (sucess)
 */

int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;


				if (n > 5)
				{
					printf("last digit of %d is %d and is greater than 5\n", n, n % 10);
				}
				else if (n == 0)
				{
					printf("last digit of %d is %d and is 0\n", n, n % 10);
				}
				else if (n < 6 != 0)
				{
					printf("last digit of %d is %d and is less than 6 and not 0\n", n, n %
							10);
				}
				else
				{
					printf("nothing")
				}

				return (0);

}
