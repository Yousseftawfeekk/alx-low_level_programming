#include <stdio.h>

/**
* main - entery point
*
* Description: print number of base16 in lowercase
*
* Return: 0 (success)
*/

int main(void)
{
	int i = 48;

	while (i <= 102)
	{
		putchar(i);

		if (i == 57)
			i += 39;
		i++;
	}
	putchar('\n');

	return (0);
