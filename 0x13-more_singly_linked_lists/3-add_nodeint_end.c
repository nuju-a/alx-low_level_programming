#include "lists.h"

/**
  *add_nodeint_end - function adds a new node at the end of the list
  *@head: pointer of a pointer to the listint_t
  *@n: the data node to be added
  *
  *Return: address of the new element or null
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current, *last;

	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);

	current->n = n;
	current->next = NULL;

	if (*head == NULL)
	{
		*head = current;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = current;
	}
	return (*head);
}
