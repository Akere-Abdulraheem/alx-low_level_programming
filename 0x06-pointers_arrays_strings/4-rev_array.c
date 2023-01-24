#include "4main.h"

void reverse_array(int *a, int n)
{
	int i = 0;
	
	while (n > i)
	{
		if (n != 0)
		{
			printf(" ,");
		}
		printf("%d", a[i]);
		n -= 1;
	}
	printf("\n");
}
