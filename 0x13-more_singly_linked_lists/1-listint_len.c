#include "lists.h"
/**
 * listint_len - prints length of a list
 * @h: pointer to the first node
 *  Return: length of a list
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);


}
