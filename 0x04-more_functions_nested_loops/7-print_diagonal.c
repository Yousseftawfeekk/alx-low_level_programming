#include "main.h"

/**
* print_diagonal - drwas a diognal line in the terminal
* @n: number of \ should be printed
*
* Return: void
**/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
					_putchar("\\");
				else if
					_putchar('');
			}
			_putchar('\n');
		}
	}
}
