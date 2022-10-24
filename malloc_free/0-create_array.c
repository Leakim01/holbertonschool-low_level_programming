#include <stdio.h>
#include "main.h"

/**
 * create_array - Entry Point
 * @size: Variable 2
 * @c: Variable 2
 *
 * More Headers Goes There
 *
 * Betty style doc for function main goes there
 *
 * Return: always 0 value
 */

char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int n;

	if (size == 0)
	return (NULL);

	tab = malloc(size * sizeof(char));
	if (tab == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
	{
		tab[n] = c;
	}
	return (tab);
}
