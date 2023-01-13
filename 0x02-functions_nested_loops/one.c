#include <stdio.h>

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	putchar('\n');
	return (0);
}

void print_alphabet(void)
{
	int c = 97;
	while (c <= 122)
	{
		putchar(c);
		c++;
	}
}
