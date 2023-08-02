#include "lists.h"

/**
  *insert_nodeint_at_index - Func. inserts new node in listint_t
  *@head: The pointer to pointer of head in listint_t
  *@idx: index where new node should be added
  *@n: the num for the new node
  *
  *Return: return NULL or address of new node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new = *head;
	unsigned int node;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;

	if (idx == 0)
	{
		temp->next = new;
		*head = temp;
		return (temp);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (new == NULL || new->next == NULL)
			return (NULL);

		new = new->next;
	}

	temp->next = new->next;
	new->next = temp;

	return (temp);
}
