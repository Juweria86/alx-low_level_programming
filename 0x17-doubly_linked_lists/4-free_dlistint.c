#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to first node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	dlistint_t *next;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
