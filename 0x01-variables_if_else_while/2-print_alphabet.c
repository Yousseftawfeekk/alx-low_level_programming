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
	char i;

	for (i = 'a', i <= 'z', i++;)
		putchar(i);
		putchar('\n');
	return (0);
}
