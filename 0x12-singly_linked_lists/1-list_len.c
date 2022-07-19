#include "lists.h"
/**
 * list_len - return number of element in a Singly linked list
 * @h: pointer to head of alist
 *
 * Return: number of element
 */

size_t list_len(const list_t *h)
{

	size_t size = 0;

	while (h != NULL)
	{
		size++;
		h = h->next;
	}
	return (size);
}
