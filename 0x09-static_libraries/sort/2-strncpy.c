#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: The destination file
 * @src: The source file
 * @n: The number of strings to copy
 *
 * Return: savedPtr
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *savedPtr = dest;

	strncpy(dest, src, n);
	return (savedPtr);
}
