#include "main.h"

/**
 * _isdigit - Entry Point
 * @c: input
 *
 * more headers goes there
 *
 * betty style doc for function main goes there
 *
 * Return: The Last Digit of a Number
 */

int _isdigit(int c);
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
