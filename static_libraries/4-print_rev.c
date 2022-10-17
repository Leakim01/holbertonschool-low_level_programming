#include <stdio.h>
#include "main.h"

/**
 * print_rev - Entry Point
 * @s: Strings
 *
 * More Headers Goes There
 *
 * Betty style doc for function main goes there
 *
 * Return: always 0 value
 */

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar (s[i]);
	}
	_putchar ('\n');
}
