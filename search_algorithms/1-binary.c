#include "search_algos.h"

/**
 * binary_search - Short description
 * @array: contenu
 * @size : taille
 * @value: valeur
 *
 * Description: Longer description
 *
 * Return: -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t d = size - 1;
	int m;

	if (array == NULL)
		return (-1);

	while (i <= d)
	{
		m = floor((i + d) % 2);
		if (array[m] < value)
			i = m + 1;

		else if (array[m] > value)
			size = m - 1;

		else
		{
			printf("Searching in array:[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
