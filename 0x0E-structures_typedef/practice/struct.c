#include <stdio.h>

/*
struct
{
        char *name;
        int age;
} myInfo;

int main(void)
{
         myInfo.name = "Akere Abdulraheem";
         myInfo.age = 20;

         printf("Name:%s\nAge:%d\n", myInfo.name, myInfo.age);
         return (0);
}*/

/* Style 2 */
struct work
{
	char *me;
	int nums;
};

int main(void)
{
	struct work Test; /* add the varName -example: 'Test'- for it to work */
	Test.me = "Hey!";
	Test.nums = 100;

	printf("%d %s\n", Test.nums, Test.me);
	return (0);
}
