# Structures, typedef

* Struct is like an array but can contain different data-types unlike arrays
* _It is most used to group relate info such as a user credentials_

Example: C-program

struct
{

	char *name;

	int age;

} myInfo;  /* structure name is defined here */


int main(void)
{

	/* How to acess a var in struct...You use structName.varName */

	myInfo.name = "Akere Abdulraheem"; 
	/*if it is a pointer--*&myInfo->name = "Akere Abdulraheem"--*/

	myInfo.age = 20;

	printf("Name:%s\n Age:%d\n, myInfo.name, myInfo.age);
	return (0);
}


* _Typedef helps us give a data-type a new name._

Example: C-program

typedef int bravo;  /* int is now equals to bravo */

int main(void)

{
	bravo A = 5;  /* added a varname named A */

	printf("%d", A);
	return 0;
}
