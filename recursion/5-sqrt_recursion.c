#include <stdio.h>
#include "main.h"

/**
 * square - Entry Point
 * @x: Inconnu 1
 * @z: Inconnu 2
 *
 * More Headers Goes There
 *
 * Betty style doc for function main goes there
 *
 * Return: always 0 value
 */

int square(int x, int z)
{
	if (x * x == z)
	{
		return (x);
	}
	else if (x * x > z)
	{
		return (-1);
	}
	return (square(x + 1, z));
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
		return (0);
	return (square(1, n));
}
