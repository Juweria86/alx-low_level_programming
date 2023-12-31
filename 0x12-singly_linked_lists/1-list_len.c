#include "lists.h"
#include <stdio.h>
/**
 * list_len - prints length of list
 * @h: pointer
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
