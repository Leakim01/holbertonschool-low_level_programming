#include <stdio.h>
#include "main.h"
/**
 * swap_int - Check the code
 * @a: Value1
 * @b: Value2
 * Return: Nothing because void function
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
