#include "main.h"

/**
* int _islower - Entry Point
*
* more headers goes there
*
* @parameterx: (description of parameter x)
*
* betty style doc for function main goes there
*
* Return: always 0 value
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
