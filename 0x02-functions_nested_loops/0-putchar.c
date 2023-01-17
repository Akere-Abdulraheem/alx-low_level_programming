#include <stdio.h>

/**
 * firstFive - This is the code
 *
 * code print _putchar using putchar
 * char == the variables
 * putchar == use to view char
 *
 * return (0) always
 */

int firstFive(void)
{
	char underscore = 95;
	char p = 112;
	char u = 117;
	char t = 116;
	char c = 99;
	char h = 104;
	char a = 97;
	char r = 114;

	putchar(underscore);
	putchar(p);
	putchar(u);
	putchar(t);
	putchar(c);
	putchar(h);
	putchar(a);
	putchar(r);
	putchar('\n');
	return (0);
}

/**
 * main - entry point
 *
 * firstFive - This code calls the function firstFive
 *
 * return (0) always
 */

int main(void)
{
	firstFive();
	return (0);
}
