#include "main.h"

/**
 * print_alphabet - utilize on the putchar function to print
 *	 the alphabet a-z
 *
*/

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 11 ; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
