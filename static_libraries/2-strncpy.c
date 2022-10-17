#include <stdio.h>
#include "main.h"

/**
 * _strncpy - Entry Point
 * @dest: Destination
 * @src: Source
 * @n: Bytes
 *
 * More Headers Goes There
 *
 * Betty style doc for function main goes there
 *
 * Return: always 0 value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
		for (; i < n; i++)
		{
		dest[i] = '\0';
	}
return (dest);
}
