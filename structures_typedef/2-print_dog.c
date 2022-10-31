#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_dog - Short description
 * @d: pointer
 *
 * Description: Longer description
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";

		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}

}
