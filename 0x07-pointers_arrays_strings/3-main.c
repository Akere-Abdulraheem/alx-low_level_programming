#include "3main.h"

int main(void)
{
	char *s = "hello";
	char *f = "oleh";
	unsigned int n;

	n = _strspn(s, f);
	printf("%u\n", n);
	return (0);
}
