#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry-point
 *
 * this code print
 * "is postive" for positive integers
 * "is zero" when n is zero
 * "is negative" when n is negative
 *
 * Return: Always 0 (Success)
 */


int main(void)

{

		int n;



			srand(time(0));

				n = rand() - RAND_MAX / 2;
				if (n > 0)
				{
					printf("%d is positive ", n);
				}
				else if (n == 0)
				{
					printf("%d is zero ", n);
				}
				else
				{
					printf("%d is negative ", n);
				}
					return (0);

}
