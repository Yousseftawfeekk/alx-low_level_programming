#include "main.h"
#include <stdio.h>

/**
* main - entery point
*
* Description: prints numbers 1 to 100 followed bey new line
*		multiplies by 3 prints Fizz
*		multiplies by 5 prints Buzz
*		multiplies by 3 & 5 prints FizzBuzz
* Return: Always 0 (success)
*/

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			prinf("FizzBuzz");
		}
		else if (i == 1)
		{
			printf("%i", i);
		}
		else
		{
			printf("%i", i);
		}
	}
	printf("\n");

	return (0);
}
