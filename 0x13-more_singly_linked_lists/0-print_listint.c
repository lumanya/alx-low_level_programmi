#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print all element of singly linked list
 * @h: pointer to head of a list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h != 0)
	{
		if (h->n != 0)
			printf("%d\n", h->n);
		size++;
		h = h->next;
	}
	return (size);
}
