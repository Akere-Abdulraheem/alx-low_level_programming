#include <stdio.h>
#include <ctype.h>
int _isalpha(int c);


int main(void)
{
	int r;

	r = _isalpha('H');
	putchar(r + '0');
	r = _isalpha('o');
	putchar(r + '0');
	r = _isalpha(108);
	putchar(r + '0');
	r = _isalpha(';');
	putchar(r + '0');
	putchar('\n');
	return (0);
}


int _isalpha(__attribute__((unused))int c)
{
	int ch = 97;
	while (ch <= 122)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
