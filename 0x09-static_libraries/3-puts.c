#include "main.h"

/**
 * _puts - prints string followed by a new line
 *
 * @str: string paramater to print
 *
 * Return: void
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
