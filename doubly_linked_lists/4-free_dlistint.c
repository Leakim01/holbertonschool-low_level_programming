#include "lists.h"

/**
 * free_dlistint - Short description
 * @head: pointer
 *
 * Description: Longer description
 *
 * Return: new_p
 */

void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
		free(head);
	}
}
