#include <stdio.h>
#include "lists.h"
/**
 * print_list -print alll elements of a list
 * @h: struct pointerK
 *
 * Return: count of nodes in a list
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);

}
