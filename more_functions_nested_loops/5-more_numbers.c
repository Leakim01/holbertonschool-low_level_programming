#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Entry Point
 *
 * more headers goes there
 *
 * betty style doc for function main goes there
 *
 * Return: always 0 value
 */

void more_numbers(void)

{
	int i; int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}
			else
			{
				_putchar(i + '0');
			}
		}
		_putchar('\n');
	}
}
