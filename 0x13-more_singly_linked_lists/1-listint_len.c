#include "lists.h"

/**
  *listint_len - function return the lenght of list
  *@h: pointer to the listint_t const
  *
  *Return: number of elements
  */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}

