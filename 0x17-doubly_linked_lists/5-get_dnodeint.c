#include "lists.h"
/**
 * get_dnodeint_at_index -  returns the nth node of a linked list
 * @head: pointer to first node
 * @index: index of the node
 * Return: null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	size_t count = 0;

	while (temp->next != NULL)
	{
		if (count == index)
			return (temp);
		temp = temp->next;
		count++;
	}
	return (NULL);
}
