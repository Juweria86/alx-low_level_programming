#include "lists.h"
/**
 * pop_listint - deletes head of a list;
 * @head: pointer to first node
 * Return: heads node data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (!*head)
		return (0);

	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (n);

}
