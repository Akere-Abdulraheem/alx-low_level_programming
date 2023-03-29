# Function Pointers

_Seems though_

---------------SIDE NOTES-----------------------
As its name implies it's a pointer pointing to a code not data

Function pointers can't be used to allocate and deallocate memory

* example:

 void fun(int a);
 void (*fun_ptr)(int) = &fun

 /* The bracket in '(*fun_ptr)' prevents a declaration of a function that returns a pointer */
