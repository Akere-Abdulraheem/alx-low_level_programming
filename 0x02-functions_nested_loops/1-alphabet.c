#include <stdio.h>

/**
 * main -entry point
 *
 * char == character variable
 *
 * for == a for loop where ch == a and keeps incrementing untill it == to z
 *
 * putchar == print ch
 *
 * Return value 0sucess
 */

int print_alphabet(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	return (0);
}

int main(void)
{
	print_alphabet();
	return (0);
}
