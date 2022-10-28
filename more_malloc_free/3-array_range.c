#include <stdio.h>
#include "main.h"

/**
 * array_range - Entry Point
 * @min: Variable 1
 * @max: Variable 2
 *
 * More Headers Goes There
 *
 * Betty style doc for function main goes there
 *
 * Return: always 0 value
 */

int *array_range(int min, int max)
{
	int *p;
	int size = 0;
	int i;

	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++)
		size++;

	p = malloc(sizeof(int) * (size));

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
