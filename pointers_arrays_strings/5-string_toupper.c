#include <stdio.h>
#include "main.h"

/**
 * string_toupper - Entry Point
 * @ptr: Array
 *
 * More Headers Goes There
 *
 * Betty style doc for function main goes there
 *
 * Return: always 0 value
 */

char *string_toupper(char *ptr)
{
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
			ptr[i] = ptr[i] - 32;
	}
	return (ptr);
}
