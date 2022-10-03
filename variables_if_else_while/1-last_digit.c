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
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n%10;

	if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", m = n%10);
	}
	else if (m < 6 && m != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", m = n%10);
	}
	else
	{
		printf("Last digit of %d is %d is zero\n", m = n%10);
	}
	return (0);
}
