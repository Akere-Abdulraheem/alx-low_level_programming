#include "2main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int saves_s = strspn(s, accept);

	return (saves_s);
}
