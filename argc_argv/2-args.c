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
	int i;
	int n = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
