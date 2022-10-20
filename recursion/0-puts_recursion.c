#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Entry Point
 * @s: String
 *
 * More Headers Goes There
 *
 * Betty style doc for function main goes there
 *
 * Return: always 0 value
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
	_putchar('\n');
	}
}
