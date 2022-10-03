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
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
		if (c != '9')

		{
			putchar(',');
			putchar(' ');
		}
	}
			putchar('\n');

	return (0);
}
