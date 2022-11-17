#include "lists.h"

/**
 * free_listint - Short description
 * @head: pointer
 *
 * Description: Longer description
 *
 * Return: new_p
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}
