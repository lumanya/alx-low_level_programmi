#include "lists.h"
/**
 * listint_len - return number of nodes in a singly linked list
 * @h: pointer to head of a singly list
 *
 * Return: number of nodes in singly linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		element++;
		h = h->next;
	}
	return (element);

}
