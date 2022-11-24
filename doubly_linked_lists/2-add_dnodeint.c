#include "lists.h"

/**
 * add_dnodeint - Short description
 * @head: pointer
 * @n: int à duppliquer
 *
 * Description: Longer description
 *
 * Return: n
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *p = malloc(sizeof(dlistint_t));

	if (p == NULL)
		return (NULL);

	p->n = n;
	p->next = *head;
	p->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = p;
	*head = p;

	return (p);
}
