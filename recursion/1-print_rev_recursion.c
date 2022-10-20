#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Entry Point
 * @s: String
 *
 * More Headers Goes There
 *
 * Betty style doc for function main goes there
 *
 * Return: always 0 value
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
	_putchar('\n');
	}
}
