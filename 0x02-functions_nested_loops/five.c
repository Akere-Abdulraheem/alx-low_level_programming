#include <stdio.h>
#include <ctype.h>
int print_sign(int n);


int main(void)
{
	int r;

	r = print_sign(98);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');

	r = print_sign(0);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');

	r = print_sign(0xff);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');

	r = print_sign(-1);
	putchar(',');
	putchar(' ');
	putchar(r + '0');
	putchar('\n');
	return (0);
}


int print_sign(__attribute__((unused))int n)
{
	int ch = 53;
	while (ch <= 53)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
