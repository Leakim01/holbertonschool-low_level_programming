#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * int_index - Short description
 * @array: pointer
 * @size: Taille
 * @cmp: batlec
 *
 * Description: Longer description
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int z;

	if (size <= 0 || array == 0 || cmp == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		z = cmp(array[i]);
		if (z != 0)
			return (i);
	}
	return (-1);
}
