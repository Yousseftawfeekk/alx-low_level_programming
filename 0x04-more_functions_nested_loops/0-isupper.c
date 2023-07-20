#include "main.h"

/*
 * _isupper - cheack c is upper
 *
 * @c: input for alphabet
 *
 * return 1 if its uppercase, 0 if not
**/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (0) ;
	else
		return (1);
