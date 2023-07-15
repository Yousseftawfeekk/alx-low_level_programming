#include <stdio.h>

/**
 * main - Entery poin
 *
 * Description: print numbers from 0 to 9
 *
 * Return: alwas 0 (success)
*/

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + 48);

		if (n !9)
		{
			putchar(',');
			putchar(' ');
		}

		n++
	}
	putchar('\n');

	return (0);
}
