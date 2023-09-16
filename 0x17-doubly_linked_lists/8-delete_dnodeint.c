#include "lists.h"
#include "5-get_dnodeint.c"

/**
 * delete_dnodeint_at_index - deletes the node at index `index` of a
 * `dlistint_t` linked list
 * @head: Address of pointer to first node
 * @index: position of node to be deleted
 *
 * Return: 1 (success), or -1 (failure).
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = NULL;

	if (*head == NULL)
		return (-1);

	node = get_dnodeint_at_index(*head, index);
	if (node == NULL)
		return (-1);

	if (node->prev == NULL && node->next)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
	}
	else if (node->next == NULL && node->prev)
		node->prev->next = NULL;
	else if (node->prev && node->next)
	{
		node->prev->next = node->next;
		node->next->prev = node->prev;
	}
	else
		*head = NULL;
	free(node);

	return (1);
}
