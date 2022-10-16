#include <stdio.h>
#include "main.h"

/**
 * _strcmp - Entry Point
 * @dest: Strings
 * @src: Pointeur to the function
 * @n: Number of the Bytes
 *
 * More Headers Goes There
 *
 * Betty style doc for function main goes there
 *
 * Return: always 0 value
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; s1[i] && s2[i]; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
