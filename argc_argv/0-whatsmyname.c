#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 * @argc: Place of each Argument
 * @argv: Number of Argument (Size of Array)
 *
 * More Headers Goes There
 *
 * Betty style doc for function main goes there
 *
 * Return: always 0 value
 */

int main(int argc, char *argv[])
{
	int i = 1;

	for (; i <= argc; i++)
	{
		printf("'%s'\n", argv[0]);
	}
	return (0);
}
