#include "main.h"
/**
 * _isdigit - a function that checks for digit (0 to 9)
 * @c: The character to be checked
 *
 * Return: 1 if true and 0 if false
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
