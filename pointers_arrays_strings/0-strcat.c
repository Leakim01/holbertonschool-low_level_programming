#include <stdio.h>
#include "main.h"

/**
 * _strcat - Entry Point
 * @dest: Destination
 * @src: Source
 *
 * More Headers Goes There
 *
 * Betty style doc for function main goes there
 *
 * Return: always 0 value
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int n;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (n = 0; src[n] != '\0'; n++)
	{
		dest[i] = src[n];
		i++;
	}
	return (dest);
}
