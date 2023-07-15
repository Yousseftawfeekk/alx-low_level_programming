#include <stdio.h>

/**
 * main - Entery poin
 *
 * Description: numbers from 0 to 9
 *
 * Return: alwas 0 (success)
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');

	return (0);
}
