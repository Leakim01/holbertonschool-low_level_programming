#include <stdio.h>
#include "main.h"

/**
 * puts2 - Entry Point
 * @str: Strings
 *
 * More Headers Goes There
 *
 * Betty style doc for function main goes there
 *
 * Return: always 0 value
 */

void puts_half(char *str)
{
	int i = 0;
	int n = 0;

	for (i = 0; str[i]; i++)
	{
		n++;
	}
	for (n = (n + 1) / 2; str[n]; n++)
	{
		_putchar (str[n]);
	}
	_putchar ('\n');
}
