#include "lists.h"

/**
 * add_node_end - Short description
 * @head: pointer
 * @str: string à duppliquer
 *
 * Description: Longer description
 *
 * Return: new_p
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_p = malloc(sizeof(list_t));
	list_t *tmp = *head;

	if (new_p == NULL)
	{
		free(new_p);
		return (NULL);
	}
	new_p->str = strdup(str);
	new_p->len = strlen(str);
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
