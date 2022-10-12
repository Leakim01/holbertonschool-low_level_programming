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

void puts2(char *str)
{
	int i = 0;
	
	for (i = 0; str[i]; i++)
	{
		if (i % 2 == 0)
		{
			_putchar (str[i]);
		}
	}
	_putchar ('\n');
}
