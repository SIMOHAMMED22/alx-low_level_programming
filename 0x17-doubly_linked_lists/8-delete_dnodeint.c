#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at
 * a given index in a doubly linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to be deleted (starting from 0).
 * Return: 1 if successful, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; current && i < index; i++)
		current = current->next;

	if (current == NULL)
		return (-1);

	if (current->next)
		current->next->prev = current->prev;
	if (current->prev)
		current->prev->next = current->next;

	free(current);
	return (1);
}
