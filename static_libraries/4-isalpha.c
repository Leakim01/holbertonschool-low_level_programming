#include "main.h"

/**
* _isalpha - Entry Point
* @c: Character
*
* more headers goes there
*
* betty style doc for function main goes there
*
* Return: always 0 value
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')

	{
		return (1);
	}

	else if (c >= 'A' && c <= 'Z')

	{
		return (1);
	}

	else

	{
		return (0);
	}
}
