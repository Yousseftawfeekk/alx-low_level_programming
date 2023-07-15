#include <stdio.h>

/**
 * main - Entery poin
 *
 * Description: print all aplhabet letters
 *
 * Return: alwas 0 (success)
*/

int main(void)
{
	char i = 'a';
	char j = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');

	return (0);
}
