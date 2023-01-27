/*include "main.h"*/

#include <stdio.h>

void _puts_recursion(char *s)
{
	puts(s);
}

int main(void)
{
	_puts_recursion("Puts with recursion");
	return 0;
}
