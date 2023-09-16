#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a `dlistint_t` linked list
 * @head: pointer to head node
 * @index: index of nth node
 *
 * Return: pointer to indexed node (success), or NULL (failure)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i;

	for (ptr = head, i = 0; ptr; ptr = ptr->next, i++)
		if (i == index)
			break;
	return (ptr);
}

