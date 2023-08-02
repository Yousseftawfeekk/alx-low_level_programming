#include "main.h"

/**
 * _strlen_recursion - retur the length of string
 * @s: poinnter points to a string
 *
 * Return: strlen
**/

int _strlen_recursion(char *s)
{
	int strlen = 0;

	if (*s >= '\0')
	{
		strlen += _strlen_recursion(s + 1);
	}

	return (strlen);
}
