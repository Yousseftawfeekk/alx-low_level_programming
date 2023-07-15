#include <stdio.h>

/**
 * main - Entery poin
 *
 * Description: print all possible diffrent
 *		combination of all digits
 *
 * Return: alwas 0 (success)
*/

int main(void)
{
	int n1 = 0, n2, n3;

	while (n1 < 10)
	{
		n2 = 0;
		while (n2 < 10)
		{
			while (n3 < 10)
			{
				if (n1 != n2 && n1 < n2 &&
				    n2 != n3 && n2 < n3)
				{
					putchar(n1 + 48);
					putchar(n2 + 48);
					putchar(n3 + 48);

					if (n1 + n2 + n3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				n3++
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');

	return (0);
}
