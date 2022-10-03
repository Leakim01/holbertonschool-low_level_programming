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
	char d;

	for (c = '0'; c <= '9'; c++)
		putchar(c);

	for (d = 'a'; d <= 'f'; d++)
		putchar(d);

	putchar('\n');

	return (0);
}
