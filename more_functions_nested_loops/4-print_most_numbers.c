#include <stdio.h>
#include "main.h"

/**
 * print_numbers - Entry Point
 *
 * more headers goes there
 *
 * betty style doc for function main goes there
 *
 * Return: always 0 value
 */
void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)

	{
		if (i != '2')
			if (i != '4')

				_putchar(i);

	}

	_putchar('\n');

}
