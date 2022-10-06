#include "main.h"

/**
* int _islower - Entry Point
*@c: Character
*
* more headers goes there
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
