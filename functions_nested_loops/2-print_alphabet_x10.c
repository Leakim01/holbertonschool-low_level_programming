#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10 - Entry Point
*
* more headers goes there
*
* betty style doc for function main goes there
* 
* Return: always 0 value
*/

void print_alphabet_x10(void)

{
	int i, j;

	for (i = 'a'; i <= 'z'; i++)
	for (j = '0'; j <= '10'; j++)

	{
		_putchar(i);
		_putchar(j);
		_putchar('\n');

	}

	_putchar('\n');


}
