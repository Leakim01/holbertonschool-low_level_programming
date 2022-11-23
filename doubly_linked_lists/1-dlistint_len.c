#include "lists.h"

/**
 * dlistint_len - Short description
 * @h: pointer
 *
 * Description: Longer description
 *
 * Return: n
 */

size_t dlistint_len(const dlistint_t *h)
{

	int n;

	for (n = 0; h != NULL; n++)
	{
	h = h->next;
	}
	return (n);
}
