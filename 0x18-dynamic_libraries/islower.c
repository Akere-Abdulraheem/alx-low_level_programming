#include <stdio.h>
#include <ctype.h>
int _islower(int c);


int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');
	return (0);
}


int _islower(__attribute__((unused))int c)
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
