#include "lists.h"

/**
  *pop_listint - function deletes head node of a listint_t
  *@head: pointer to pointer of listint_t list
  *
  *Return: 0
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int store = 0;

	if (head == NULL)
	{
		return (0);
	}

	temp = *head;
	store = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (store);
}
