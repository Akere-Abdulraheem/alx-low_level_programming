#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number
 *
 * Return: factorial(n-1) and -1 if fails
 */

int factorial(int n)
{
	/* Base case */
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

/**
 * Description - Factorial is a recursive function that
 * calls it self.
 * if n is less than 0
 * it returns -1
 * if n equals 0
 * it returns 1
 * otherwise it multiply current n by calling factorial
 * n-1
 */
