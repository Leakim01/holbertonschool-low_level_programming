#include "main.h"

/**
* print_last_digit - Entry Point
* @i: input
*
* more headers goes there
*
* betty style doc for function main goes there
*
* Return: The Last Digit of a Number
*/

int print_last_digit(int i)
{
	int mod = i % 10;

	if (mod > 0)
	{
	_putchar(mod + '0');
	return (mod);
	}
	else if (mod == 0)
	{
	_putchar(mod + '0');	/* '0'(char ascii) = 48 en décimal */
	return (mod);
	}
	else
	{
	_putchar(-mod + '0');
	return (-mod);
	}
}
