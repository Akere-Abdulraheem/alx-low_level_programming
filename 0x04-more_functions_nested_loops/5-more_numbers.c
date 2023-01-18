#include "main.h"
/**
 * more_numbers - a function that prints numbers from 0 to 14 ten times
 *
 * Return: nothing void
 */

void more_numbers(void)
{
	int b = 0,c = 48 /*d = 0*/;

	while ( b < 11)
	{
		for (c = 48;c <= 57; c++)
		{
			putchar(c);
		}
		/*for ( b < 5)
		{
			while(d < 10)
			{
				for (d < 10)
				{
					putchar(d);
				}
			}	
				b++;
		}*/
		putchar('\n');
	}
}
