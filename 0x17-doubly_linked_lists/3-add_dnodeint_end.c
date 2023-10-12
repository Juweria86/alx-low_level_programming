#include "lists.h"
/**
 * add_dnodeint_end - add node at the end of list
 * @head: pointer to first node
 * @n: value to be added
 * Return: the new added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
		newnode->prev = temp;
	}
	return (newnode);
}
