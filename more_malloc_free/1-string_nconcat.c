#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - Entry Point
 * @s1: Variable 1
 * @s2: Variable 2
 * @n: Empty batlec
 *
 * More Headers Goes There
 *
 * Betty style doc for function main goes there
 *
 * Return: always 0 value
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *tab_s;
	unsigned int a, b, y, z, size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (b = 0; b < n; b++)
	{
	}
	size = a + b;

	tab_s = malloc(sizeof(char) * (size + 1));

	if (tab_s == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < a; y++)
	{
		tab_s[y] = s1[y];
	}
	for (z = 0; z < b; z++)
	{
		tab_s[y + z] = s2[z];
	}
	tab_s[y + z] = '\0';
	return (tab_s);
}
