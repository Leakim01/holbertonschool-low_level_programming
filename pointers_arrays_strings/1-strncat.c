#include <stdio.h>
#include "main.h"

/**
 * _strncat - Entry Point
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

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int o;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (o = 0; o < n && src[o] != '\0'; o++)
	{
		dest[i] = src[o];
		i++;
	}
	return (dest);
}
