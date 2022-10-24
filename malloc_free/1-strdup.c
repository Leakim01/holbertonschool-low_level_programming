#include <stdio.h>
#include "main.h"

/**
 * strdup - Entry Point
 * @str: Variable 1
 *
 * More Headers Goes There
 *
 * Betty style doc for function main goes there
 *
 * Return: always 0 value
 */

char *_strdup(char *str)
{
	int i = 0;
	int size = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		size++;
	}

	s = malloc(sizeof(char) * (size + 1));

	if (s == NULL)
		{
		return (NULL);
		}

	for (i = 0; i != '\0'; i++)
		{
		s[i] = str[i];
		}
	return (str);
}
