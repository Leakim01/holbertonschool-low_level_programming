#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Entry Point
 * @a: Array
 * @n: Number of Arrays
 *
 * More Headers Goes There
 *
 * Betty style doc for function main goes there
 *
 * Return: always 0 value
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	for (i = 0; i < n; i++)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}	
