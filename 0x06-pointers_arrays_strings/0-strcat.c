#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - uses strcat check main.c for more
 * @dest: The file to add to
 * @src: The source file which we are adding from
 *
 * Return: strcatValue Always check comment beside it
 */
char *_strcat(char *dest, char *src)
{
	char *strcatValue = *&dest; /*this stores the value of dest*/

	strcat(dest, src);
	return (strcatValue); /*calls strcatValue which prints dest value*/
}
