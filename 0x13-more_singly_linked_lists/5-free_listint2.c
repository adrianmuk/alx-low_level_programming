#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to list of type listint_t
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
