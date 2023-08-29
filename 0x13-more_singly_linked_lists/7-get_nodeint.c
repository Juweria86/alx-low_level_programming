#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to firsst node
 * @index: the place new node is going to be printed
 * Return: new node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int i = 0;

	current = head;
	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		i++;
		current = current->next;
	}
	return (NULL);
}
