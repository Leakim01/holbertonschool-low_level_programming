#include "lists.h"

/**
 * listint_len - Short description
 * @h: pointer
 *
 * Description: Longer description
 *
 * Return: i
 */

size_t listint_len(const listint_t *h)
{

	int n;

	for (n = 0; h != NULL; n++)
	{
	h = h->next;
	}
	return (n);
}
