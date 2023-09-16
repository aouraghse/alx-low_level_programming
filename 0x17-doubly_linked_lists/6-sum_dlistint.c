#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a
 * `dlistint_t` linked list
 * @head: pointer to head node
 *
 * Return: sum or if list is empty, 0.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = NULL;
	int sum;

	for (ptr = head, sum = 0; ptr; ptr = ptr->next)
		sum += ptr->n;

	return (sum);
}
