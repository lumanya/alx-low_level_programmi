#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - return sum of all data in linked list
 * @head: pointer to singly linked list
 *
 * Return: sum of singlylinked list on sucess otherwise 0
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp = head;
	int sum = 0;

	if (head)
	{
		while (tmp != NULL)
		{
			sum = tmp->n + sum;
			tmp = tmp->next;
		}
		return (sum);
	}
	return (0);
}
