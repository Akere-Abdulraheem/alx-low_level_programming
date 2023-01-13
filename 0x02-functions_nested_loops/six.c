#include <stdio.h>
#include <stdlib.h>
int _abs(int);


int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);

	r = _abs(0);
	printf("%d\n", r);

	r = _abs(108);
	printf("%d\n", r);

	r = _abs(';');
	printf("%d\n", r);
	return (0);
}


int _abs(int r)
{
	int a = 0;
	while (a <= 127)
	{
		putchar(r);
		a++;
	}
	putchar('\n');
	return (0);
}
