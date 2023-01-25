#include "main.h"

/**
 * _strncat - check description of _strcat(file 0-strcat.c)...for more
 * @dest: Destination file
 * @src: Source File
 * @n: Number of character to copy
 *
 * Return: savePtr
 */

char *_strncat(char *dest, char *src, int n)
{
	char *savePtr = *&dest;

	strncat(dest, src, n);
	return (savePtr);
}
