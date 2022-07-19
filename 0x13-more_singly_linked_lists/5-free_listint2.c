#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - free linked list
 * @head: pointer to pointer of linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}
}
