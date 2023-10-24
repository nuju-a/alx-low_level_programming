#include "lists.h"

/**
  *add_nodeint - function adds a new node at the beginning of list
  *@head: pointer to pointer of listint_t
  *@n: const integer
  *
  *Return: address of new element or null if failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	current = malloc(sizeof(listint_t));
	if (current == NULL)
		return (NULL);

	current->n = n;
	current->next = *head;
	*head = current;

	return (current);
}
