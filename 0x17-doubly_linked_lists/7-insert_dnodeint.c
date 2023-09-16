#include "lists.h"
#include "1-dlistint_len.c"
#include "5-get_dnodeint.c"

dlistint_t *create_node7(const int n);
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: Address of pointer to head node
 * @idx: position of insertion
 * @n: value of the `int` variable in the new node
 *
 * Return: address of the new node, or NULL (failure)
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *next_node = NULL;
	unsigned int len;

	len = dlistint_len(*h);
	if (idx > len)
		return (NULL);

	if (idx == len)
		new_node = add_dnodeint_end(h, n);
	else
	{
		if (idx == 0)
			new_node = add_dnodeint(h, n);
		else
		{
			new_node = create_node7(n);
			if (new_node == NULL)
				return (NULL);
			next_node = get_dnodeint_at_index(*h, idx);
			if (next_node == NULL)
			{
				free(new_node);
				return (NULL);
			}
			new_node->next = next_node;
			new_node->prev = next_node->prev;
			next_node->prev = new_node;
			new_node->prev->next = new_node;
		}
	}

	return (new_node);
}

/**
 * create_node7 - create a `dlistint_t` node
 *
 * @n: value to assign to member `n` of the new node
 *
 * Return: node (success), or NULL (failure).
 */
dlistint_t *create_node7(const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);

	new_node->n = (int)n;
	new_node->prev = NULL;
	new_node->next = NULL;

	return (new_node);
}
