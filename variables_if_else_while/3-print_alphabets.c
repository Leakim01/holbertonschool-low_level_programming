#include <stdio.h>

/**
* main - Entry Point
*
* more headers goes there
*
* betty style doc for function main goes there
*
* Return: always 0 value
*/

int main(void)
{
	char c;
	char C;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);

	for (C = 'A'; C <= 'Z'; C++)
	putchar(C);

		putchar('\n');

	return (0);
}
