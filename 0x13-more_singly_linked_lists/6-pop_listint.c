#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - delete head of the list and return value of the node
 * @head: pointer to a pointerof the list
 *
 * Return: value of the node
 */

int pop_listint(listint_t **head)
{

	listint_t *tmp = *head;
	int n;

	if (*head != NULL)
	{
		n = tmp->n;
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		return (n);
	}
	else
	{
		return (0);
	}

}
