#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: the string to reverse
 */

void _print_rev_recursion(char *s)
{
	char *rev_str = s;
	char *arr = malloc(sizeof(char));
	int rev_str_len = strlen(s);

	/*putchar(arr[]);*/
	*arr = s;
	printf("%d\n",arr[5]);
	printf("%d\n", rev_str_len);
}
