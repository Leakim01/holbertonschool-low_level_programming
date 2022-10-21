#include <stdio.h>
#include "main.h"

/**
 * factorial - Entry Point
 * @n: String
 *
 * More Headers Goes There
 *
 * Betty style doc for function main goes there
 *
 * Return: always 0 value
 */

int factorial(int n)
{
	if (n < '\0')
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
