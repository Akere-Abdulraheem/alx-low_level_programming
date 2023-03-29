#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string Two
 *
 * Return: res(which hold the concated strings)
 */

char *str_concat(char *s1, char *s2)
{
	char *access_1, *access_2, *res;

	/* checks if 's' contains strings */
	/*if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}*/

	/* access the value in the pointer */
	access_1 = *&s1;
	access_2 = *&s2;

	/* store duplicate in a variable*/
	res = strcpy(access_1, access_2);

	/* return variable which stores duplicate*/
	return (res);
}
