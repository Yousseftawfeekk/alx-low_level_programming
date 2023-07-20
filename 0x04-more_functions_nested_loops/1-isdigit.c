#include "main.h"

/**
 * _isdigit - check if is is a digit
 *
 * @c: digits 0-9
 *
 * return 1 if it's digit, 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
