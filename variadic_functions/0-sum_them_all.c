#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * sum_them_all - Short description
 * @n: pointer
 *
 * Description: Longer description
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(args, n);

		while (i < n)
		{
			sum += va_arg(args, int);
			i++;
		}
		va_end(args);
		return (sum);
	}
	return (0);
}
