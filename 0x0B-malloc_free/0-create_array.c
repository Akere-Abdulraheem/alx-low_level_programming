#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char
 * @size: si
 * @c: ..
 *
 * .......RULES......
 * no more than 5 functions per file
 * no printf,puts, calloc, realloc
 * allowed - malloc,free _putchar
 *
 * Return: a pointer to the array or Null if fails*/

char *create_array(unsigned int size, char c)
{
	char *arr_ptr;
	unsigned int b;
	
	arr_ptr = malloc(sizeof(unsigned int) * size);
	if (arr_ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (b = 0; b < size ; ++b)
		{
			putchar(c);
		}
	}
	return (arr_ptr);
}
