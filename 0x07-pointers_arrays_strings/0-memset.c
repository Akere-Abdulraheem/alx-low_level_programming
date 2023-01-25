#include "0main.h"

char *_memset(char *s, char b, unsigned int n)
{
	char *saves_s = *&s;

	memset(s, b, n);
	return (saves_s);
}
