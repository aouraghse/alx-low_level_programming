#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to head node
 *
 * Return: number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp = (dlistint_t *)h;
	size_t n = 0;

	while (temp)
	{
		temp = temp->next;
		n++;
	}

	return (n);
}
