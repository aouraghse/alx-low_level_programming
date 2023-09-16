#include "lists.h"

/**
 * free_dlistint - frees a `dlistint_t` list
 * @head: pointer to head node
 *
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
