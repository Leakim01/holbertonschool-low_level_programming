#include "main.h"

/**
* _print_sign - Entry Point
* @c: Character
*
* more headers goes there
*
* betty style doc for function main goes there
*
* Return: always 0 value
*/

int print_sign(int n)
{
	if (n > '0')

	{
	_putchar('+');
		return (1);
	}

	else if (n == '0')

	{
	_putchar('0');
		return (0);
	}

	else

	{
	_putchar ('-');
		return (0);
	}
}
