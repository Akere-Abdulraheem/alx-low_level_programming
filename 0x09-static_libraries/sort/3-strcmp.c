#include "main.h"

/**
  * _strcmp - compare two strings
  * @s1: First string
  * @s2: Second string
  *
  * Description - Because strcmp compares two strings and need to return
  * an int, it need to be stored in a variable first with data-type(int)
  * and then return the value stored.
  * Return: value (which saves strcmp data)
 */
int _strcmp(char *s1, char *s2)
{
	int value = strcmp(s1, s2);

	return (value);
}
