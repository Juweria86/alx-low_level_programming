#include "lists.h"
/**
 * free_listint2 - frees list and sets head to null.
 * @head: pointer to first node
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
