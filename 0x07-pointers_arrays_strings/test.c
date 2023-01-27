#include <stdio.h>

int main()
{
	int arr[] = {2,4,6,8};
	int arrLen = sizeof arr / sizeof arr[0];

	printf("%d", arrLen);
	return 0;
}
