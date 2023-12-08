#include "lists.h"

/**
  *add_dnodeint_end - function adds a new node at the end of list
  *@head: pointer to head
  *@n: new node
  *
  *Return: adrress of new element or NULL
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *endNode = NULL;
	dlistint_t *current = *head;

	endNode = malloc(sizeof(dlistint_t));
	if (!endNode)
		return (NULL);

	endNode->n = n;

	if (*head == NULL)
	{
		endNode->prev = *head;
		endNode->next = NULL;
		*head = endNode;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;

		endNode->prev = current;
		current->next = endNode;
		endNode->next = NULL;
	}

	return (endNode);
}
