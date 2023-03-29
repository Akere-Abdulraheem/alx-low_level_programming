#include "main.h"

/**
 * _strdup - duplicate a string
 * @str: string to duplicate
 *
 * Return: res(which hold the duplicate)
 */

char *_strdup(char *str)
{
	char *access, *res;

	/* checks if 'str' contains strings */
	if (str == NULL)
	{
		return (NULL);
	}

	/* access the value in the pointer */
	access = *&str;

	/* store duplicate in a variable*/
	res = strdup(access);

	/* return variable which stores duplicate*/
	return (res);
}
