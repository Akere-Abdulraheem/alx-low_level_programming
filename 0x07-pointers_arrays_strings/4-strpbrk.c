#include "4main.h"

char *_strpbrk(char *s, char *accept)
{
	char *saves_s = strpbrk(s, accept);

	return (saves_s);
}
