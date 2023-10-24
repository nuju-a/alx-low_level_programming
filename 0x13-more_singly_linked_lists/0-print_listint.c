#include "lists.h"

/**
  *print_listint - function to print elements in listint
  *@h: pointer to listint
  *
  *Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	const listint_t *head;
	const listint_t *current;
	size_t count = 0;

	head = h;
	if (head != NULL)
		current = head;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		count += 1;
		current = current->next;
	}
	return (count);
}

