#include "lists.h"

/**
  *sum_dlistint - funct returns sum of all data in list
  *@head: head pointer
  *
  *Return: 0
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
