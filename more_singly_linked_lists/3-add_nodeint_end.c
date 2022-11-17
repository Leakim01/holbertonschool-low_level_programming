#include "lists.h"

/**
 * add_nodeint_end - Short description
 * @head: pointer
 * @n: string à duppliquer
 *
 * Description: Longer description
 *
 * Return: new_p
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_p = malloc(sizeof(listint_t));
	listint_t *tmp = *head;

	if (new_p == NULL)
	{
		free(new_p);
		return (NULL);
	}
	new_p->n = n;
	new_p->next = NULL;
	if (*head == NULL)
	{
		*head = new_p;
		return (new_p);
	}
	tmp = *head;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_p;

	return (new_p);
}
