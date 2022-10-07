#include "main.h"

/**
* jack_bauer - Entry Point
* @h, m: input
*
* more headers goes there
*
* betty style doc for function main goes there
*
* Return: The Last Digit of a Number
*/

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
		for (m = 0; m < 60; m++)
	{
		_putchar(h / 10 + '0');
		_putchar(h % 10 + '0');
		_putchar(':');
		_putchar(m / 10 + '0');
		_putchar(m % 10 + '0');
		_putchar('\n');

	}

}
