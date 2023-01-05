#include "search_algos.h"

/**
 * binary_search - Short description
 * @array: contenu
 * @size : taille
 * @value: valeur
 * Description: Longer description
 * Return: -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t l = 0;
	size_t r = (size - 1);

	if (size <= 0 && array == NULL)
		return (-1);
	printf("Searching in array: ");
	for (i = 0; i < r; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[r]);
	while (l < r)
	{
		size_t m = ((l + r) / 2);

		if (array[m] > value)
		{
			r = m - 1;
			printf("Searching in array: ");
			for (i = l; i < r; i++)
				printf("%d, ", array[i]);
			printf("%d\n", array[r]);
			return (r);
		}
		else if (array[m] < value)
		{
			l = m + 1;
			printf("Searching in array: ");
			for (i = l; i < r; i++)
				printf("%d, ", array[i]);
			printf("%d\n", array[r]);
			continue;
		}
		else
		{
			return (m);
		}
	}
	return (-1);
}
