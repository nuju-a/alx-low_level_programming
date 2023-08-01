#include "lists.h"

/**
  *listint_t *add_nodeint_end - Func. add new node at the end of listint_t
  *@head: pointer to pointer to listint_t
  *@n: the new data to be entered
  *
  *Return: returns address of the new element
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *last;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = temp;
	}

	return (*head);
}
