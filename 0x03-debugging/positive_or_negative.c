#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

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


void positive_or_negative(int i)
{
		/*int i;*/



			/*srand(time(0));*/

				/*n = rand() - RAND_MAX / 2;*/
				if (i > 0)
				{
					printf("%d is positive\n", i);
				}
				else if (i == 0)
				{
					printf("%d is zero\n", i);
				}
				else
				{
					printf("%d is negative\n", i);
				}
					/*return (0);*/

}
