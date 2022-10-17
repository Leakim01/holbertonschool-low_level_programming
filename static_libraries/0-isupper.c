#include "main.h"

/**
 * _isupper - Entry Point
 * @c: input
 *
 * more headers goes there
 *
 * betty style doc for function main goes there
 *
 * Return: The Last Digit of a Number
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
