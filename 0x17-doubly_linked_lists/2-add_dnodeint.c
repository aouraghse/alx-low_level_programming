#include "lists.h"

dlistint_t *create_node2(const int n);
/**
 * add_dnodeint - adds a new node at the beginning of a `dlistint_t` list
 * @head: address of pointer to head node
 * @n: value to assign to variable `n` in the new node
 *
 * Return: address of the new element (success), or NULL (failure).
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (*head == NULL)
	{
		*head = create_node2(n);
		return (*head);
	}

	new_node = create_node2(n);
	if (!new_node)
		return (NULL);

	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}

/**
 * create_node2 - create a `dlistint_t` node
 *
 * @n: value to assign to member `n` of the new node
 *
 * Return: node (success), or NULL (failure).
 */
dlistint_t *create_node2(const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = (int)n;
	new_node->prev = NULL;
	new_node->next = NULL;

	return (new_node);
}
