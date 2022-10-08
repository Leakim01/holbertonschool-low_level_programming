#include <stdio.h>
#include "main.h"

/**
 * print_line - Entry Point
 * @n: Multiply
 *
 * more headers goes there
 *
 * betty style doc for function main goes there
 *
 * Return: always 0 value
 */

void print_line(int n)
{
	int m;

	for (m = 0; m <= n; m++)
	{	
		if (m > 0) 
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');

}
