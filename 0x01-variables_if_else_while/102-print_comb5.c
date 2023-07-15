#include <stdio.h>

/**
 * main - Entery poin
 *
 * Description: Write a program that prints all possible
 *		 diffrent combination of 2 digits
 *
 * Return: alwas 0 (success)
*/

int main(void)
{
	int n1 = 0, n2;

	while (n1 < 100)
	{
		n2 = n1;
		while (n2 < 100)
		{
			if (n1 != n2)
			{
				putchar((n1 / 10) + 48);
				putchar((n1 % 10) + 48);
				putchar(' ');
				putchar((n2 / 10) + 48);
				putchar((n2 % 10) + 48);

				if (n1 != 98 || n2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');

	return (0);
}
