#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabets 10x in lowercase with newline
 *
 * char ch == character variable
 * int n == number of time the loops runs
 * for == a for loop where ch == a and keeps incrementing until it == to z
 * putchar == print ch
 *
 * Return: 0 (sucess)
 */

int print_alphabet_x10(void)
{
	char ch;
	int n = 0;

	while (n < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
		n++;
	}
		return (0);
}
