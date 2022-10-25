#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - Entry Point
 * @width: Variable 1
 * @height: Variable 2
 *
 * More Headers Goes There
 *
 * Betty style doc for function main goes there
 *
 * Return: always 0 value
 */

int **alloc_grid(int width, int height)
{
	int i, z;
	int	**p;

	if (width <= 0 && height <= 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(p[i]);
				p[i] = NULL;
			}
			free(p);
			p = NULL;
		}
		for (z = 0; z < height; z++)
		{
			p[i][z] = 0;
		}
	}
	return (p);
}
