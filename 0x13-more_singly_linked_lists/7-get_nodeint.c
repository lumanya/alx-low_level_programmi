#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - return nth node of a linked list
 * @head: pointer to linked lists
 * @index: index of the node
 *
 * Return: on sucess return value of the node otherwise false
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	listint_t *tmp = head;
	unsigned int i = 0;

	if (head)
	{

		while (i < index)
		{

			if (tmp == NULL)
				return (NULL);
			tmp = tmp->next;
			i++;
		}
		return (tmp);
	}
	else
	{
		return (NULL);
	}
}
