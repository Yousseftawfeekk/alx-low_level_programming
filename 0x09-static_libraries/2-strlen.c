#include "main.h"

/**
 * _strlen - return tje length of string
 *
 * @s: string parameter input
 *
 * Return: length
**/

int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
		length++;

	return (length);
}
