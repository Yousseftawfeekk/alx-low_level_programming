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
	int n1 = 48, n2;

	while (n1 <= 56)
	{
		n2 = 49;
		while (n2 <= 57)
		{
			if (n1 < n2)
			{
				putchar(n1 + 48);
				putchar(n2 + 48);

				if (n1 != 56 || n2 != 57)
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
