#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a singly linked list
 * @head: head pointer to a list
 */

void free_listint(listint_t *head)
{

	listint_t *tmp = head;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(head);
		head = tmp;
	}
}
