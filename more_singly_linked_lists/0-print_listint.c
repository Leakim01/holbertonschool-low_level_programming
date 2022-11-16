#include "lists.h"

/**
 * print_listint - Short description
 * @h: pointer
 *
 * Description: Longer description
 *
 * Return: i
 */

size_t print_listint(const listint_t *h)
{
	int n;

	for (n = 0; h != NULL; n++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
