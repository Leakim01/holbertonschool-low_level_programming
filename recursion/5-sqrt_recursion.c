#include <stdio.h>
#include "main.h"

/**
 * _square - Entry Point
 * @x: Inconnu 1
 *
 * square - Second Entry Point
 * @n: Inconnu 2
 *
 * More Headers Goes There
 *
 * Betty style doc for function main goes there
 *
 * Return: always 0 value
 */

int square(int x, int n)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x * x > n)
	{
		return (-1);
	}
	return (0);
}

/**
 * _sqrt_recursion - Entry Point
 * @n: String
 *
 * More Headers Goes There
 *
 * Betty style doc for function main goes there
 *
 * Return: always 0 value
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return square(1, n);
}
