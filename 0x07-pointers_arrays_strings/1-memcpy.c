#include "0main.h"

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *saves_src = *&dest;

	memset(dest, *src, n);
	return (saves_src);
}
