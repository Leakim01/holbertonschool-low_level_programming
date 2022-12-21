#include "lists.h"

/**
 * dlistint_t - Short description
 * @head: pointer
 * @index: Index
 *
 * Description: Longer description
 *
 * Return: I don't know
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}
