#include "lists.h"
/**
 * free_listint - function that frees list
 * @head: pointer to the first node
 */
void free_listint(listint_t *head)
{
	listint_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
