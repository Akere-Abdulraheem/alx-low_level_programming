# Static Libraries

# libmy.a

How to create a static library

1.
   create your files(functions, header, main)

2.
   compile without linking
   gcc -c file1 file2 ...

3.
   Now archive object files
   ar -rc libraryName.a \*.o\

4.
  Now index the library
  ranlib libraryName.a

5.
  Now compile with library
  gcc main.c -L. libraryname.a

  //If you have changed a file, you start the process again from number 2//

