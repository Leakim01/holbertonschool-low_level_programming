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
	size_t l = 0;
	size_t r = size - 1;
	size_t m = floor((l + r) % 2);

	if (array == NULL)
		return (-1);

	printf("Searching in array: %d", i);
	while (l <= r)
	{
		if (array[m] < value)
			l = m + 1;
			
		else if (array[m] > value)
			r = m - 1;
		else
				return (m);
	}
	return (-1);
}
