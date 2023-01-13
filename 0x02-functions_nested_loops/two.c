#include <stdio.h>

void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();
	return (0);
}

void print_alphabet_x10(void)
{
	int num = 0;
	while (num < 11 )
	{
		int c = 97;
		while (c <= 122)
		{
			putchar(c);
			c++;
		}
		num++;
		putchar('\n');
	}
}
