#include "lists.h"

/**
 * print_dlistint - Short description
 * @h: pointer
 *
 * Description: Longer description
 *
 * Return: n
 */

size_t print_dlistint(const dlistint_t *h)
{
	int n;

	for (n = 0; h != NULL; n++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
