#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - Entry Point
 * @b: Variable 1
 *
 * More Headers Goes There
 *
 * Betty style doc for function main goes there
 *
 * Return: always 0 value
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *s;

	s = malloc(b);
	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
