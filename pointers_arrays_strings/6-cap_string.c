#include <stdio.h>
#include "main.h"

/**
 * cap_string - Entry Point
 * @ptr: String
 *
 * More Headers Goes There
 *
 * Betty style doc for function main goes there
 *
 * Return: always 0 value
 */

char *cap_string(char *ptr)
{
	char sep[] = ", ;.!?\"(){}\t\n";
	int i;
	int n;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		for (n = 0; sep[n] != '\0'; n++)
		{
			if (ptr[i] == sep[n])
				ptr[i + 1] = ptr[i + 1] - 32;
		}
	}
	return (ptr);
}
