#include "main.h"

/**
 *  print_alphabet - prints the alphabet in lowercase with newline
 *
 * char == character variable
 * for == a for loop where ch == a and keeps incrementing untill it == to z
 * putchar == print ch
 *
 * Return value 0sucess
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
