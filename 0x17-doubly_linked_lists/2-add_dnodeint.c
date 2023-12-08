#include "lists.h"

/**
  *add_dnodeint - function adds a new node at the beginning of list
  *@head: pointer to the head of list
  *@n: new node
  *
  *Return: address of new element of null if it fails
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = NULL;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head != NULL)
		(*head)->prev = newNode;

	*head = newNode;

	return (*head);
}
