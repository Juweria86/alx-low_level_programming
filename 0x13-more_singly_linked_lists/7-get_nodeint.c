#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: pointer to firsst node
 * @index: the place new node is going to be printed
 * Return: new node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new_node, *temp;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	temp = head;
	for (i = 0; i < index; i++)
		temp = temp->next;
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
