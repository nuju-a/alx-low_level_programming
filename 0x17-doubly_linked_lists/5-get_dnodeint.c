#include "lists.h"

/**
  *get_dnodeint_at_index - func gets node at index of list
  *@head: pointer to head pointer
  *@index: index member
  *
  *Return: 0
  */
dlistint_t *get_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return (NULL);

	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		i++;
		current = current->next;
	}

	return (NULL);
}
