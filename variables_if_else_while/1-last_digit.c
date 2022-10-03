#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	md = n % 10;

	if (md > 5)
	{
		printf("Last digit of %d is md and is greater than 5\n", n);
	}
	else if (md < 6 && md != 0)
	{
		printf("Last digit of %d is md and is less than and not 0\n", n);
	}
	else
	{
		printf("Last digit of %d is md and is zero\n", n);
	}
	return (0);
}
