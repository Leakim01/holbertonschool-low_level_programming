#include <stdio.h>
#include "main.h"

/**
 * print_array - Entry Point
 * @a: Array
 * @n: Number of elements
 *
 * More Headers Goes There
 *
 * Betty style doc for function main goes there
 *
 * Return: always 0 value
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else if (i != 0)
		{
		printf(", %d", a[i]);
		}
	}
	printf("\n");
}
