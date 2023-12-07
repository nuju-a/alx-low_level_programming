#include "lists.h"

/**
  *print_dlistint - function prints all the elements of dlistint_t list
  *@h: const pointer to dlistint_t list
  *
  *Return: number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	int node = 0;

	while (h != NULL)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}
