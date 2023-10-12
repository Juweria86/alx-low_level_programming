#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - adds node at the beginning of list
 * @head: pointer to first node
 * @n: number to be added
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = (*head);
	if (*head != NULL)
		(*head)->prev = newnode;

	(*head) = newnode;
	return (newnode);
}
