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
	int n1 = 0, n2;

	while (n1 < 10)
	{
		n2 = 0;
		while (n2 < 10)
		{
			if (n1 != n2 && n1 < n2)
			{
				putchar(n1 + 48);
				putchar(n2 + 48);

				if (n1 + n2 != 17)
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







		putchar(n + 48);

		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}

		n++;
	}
	putchar('\n');

	return (0);
}
