#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: First integer
 * @b: Second integer
 *
 * Ok so what I did was to save the value of a first in the variable "h"
 * before it gets overwritten using pointer d, then I swapped the value
 * of a to b using the pointer f, and what remains is to called the stored
 * value in "h"
 *
 * Return: nothing void.
 */
void swap_int(int *a, int *b)
{
	int *d = a;
	int h = *d;
	int *f = b;

	*a = *f;
	*b = h;
}
