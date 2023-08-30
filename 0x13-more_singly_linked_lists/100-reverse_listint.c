#include "lists.h"
/**
 * reverse_listint - reverses linked list
 * @head: pointer to first node
 * Return: pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *start = NULL, *end = NULL;

	while (*head)
	{
		start = (*head)->next;
		(*head)->next = end;
		end = (*head);
		(*head) = start;
	}
	(*head) = end;
	return (*head);
}
