#include "lists.h"

/**
 * add_nodeint - Short description
 * @head: pointer
 * @n: int à duppliquer
 *
 * Description: Longer description
 *
 * Return: n
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p = malloc(sizeof(listint_t));

	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = *head;
	*head = p;

	return (p);
}
