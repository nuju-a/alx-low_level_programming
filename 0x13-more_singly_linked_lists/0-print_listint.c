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
	size_t count = 0;

	head = h;
	while (head != NULL)
	{
		count++;
		printf("%d\n", head->n);
		head = head->next;
	}
	return (count);
}

