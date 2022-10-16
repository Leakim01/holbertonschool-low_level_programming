#include <stdio.h>
#include "main.h"

/**
 * leet - Entry Point
 * @ptr: String
 *
 * More Headers Goes There
 *
 * Betty style doc for function main goes there
 *
 * Return: always 0 value
 */

char *leet(char *ptr)
{
	char leet[] = "aeotlAEOTL";
	char numb[] = "4307143071";
	int i;
	int n;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		for (n = 0; leet[n] != '\0'; n++)
		{
			if (ptr[i] == leet[n])
				ptr[i] = numb[n];
		}
	}
	return (ptr);
}
