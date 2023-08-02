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
	int store;

	if (*head == NULL && head == NULL)
	{
		return (0);
	}

	temp = *head;
	store = temp->n;
	*head = temp->next;

	free(temp);

	return (store);
}
