#include <stdio.h>
#include <string.h>

/**
 * main -entry point
 *
 * a code that print alphabet in lowercase using putchar
 *
 * Return: Always 0 (sucess)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

return (0);
}
