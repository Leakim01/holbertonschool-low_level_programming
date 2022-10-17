#include <stdio.h>
#include "main.h"

/**
 * _strlen - Entry Point
 * @s: Value to change from 402 to 98
 *
 * More Headers Goes There
 *
 * Betty style doc for function main goes there
 *
 * Return: always 0 value
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
