#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Entry Point
 * @n: Multiply
 *
 * more headers goes there
 *
 * betty style doc for function main goes there
 *
 * Return: always 0 value
 */

void print_diagonal(int n)
{
	int sp;
	int sl;

	for (sl = 0; sl < n; sl++)
	{
		for (sp = 0; sp < sl; sp++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar ('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
