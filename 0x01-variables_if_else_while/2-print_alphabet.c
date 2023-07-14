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

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
