#include "lists.h"

/**
  *get_nodeint_at_index - function returns the nth node
  *@head: The pointer to listint_t
  *@index: The index of node to locate
  *
  *Return: NULL or node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
