#!/usr/bin/bash

gcc -c 0-isupper.c  0-strcat.c   1-strncat.c  2-strlen.c   3-puts.c    4-isalpha.c  6-abs.c  _putchar.c 0-isupper.c 1-isdigit.c  100-atoi.c   2-strncpy.c  3-strcmp.c  4-strpbrk.c  9-strcpy.c 0-memset.c 1-memcpy.c 2-strchr.c 3-islower.c  3-strspn.c 5-strstr.c ; ar -rc liball.a *.o ; ranlib liball.a ; gcc main.c -L. liball.a
