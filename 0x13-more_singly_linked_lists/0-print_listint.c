#include "lists.h"

/**
  *print_listint - Function that priints all the elements in listint_t list
  *@h: The pointer parameter to the list
  *
  *Return: returns the number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		size++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (size);
}
