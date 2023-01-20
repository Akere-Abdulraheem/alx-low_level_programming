#include <stdio.h>

/**
 * main - program prints out it's name followed by a new line
 * @argc: arguments counts
 * @argv: arguments value
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n",argv[0]);
	return (0);
}
