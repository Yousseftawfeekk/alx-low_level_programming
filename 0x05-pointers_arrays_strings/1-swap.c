#include "main.h"

/**
 * swap_int - swap the value of tow integers
 *
 * @a: input paramter 1
 * @b: input parameter 2
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
