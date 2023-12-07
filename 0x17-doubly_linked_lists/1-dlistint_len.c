#include "lists.h"

/**
  *dlistint_len - function returns num of elements in list
  *@h: pointer to head in list
  *
  *Return: 0 always.
  */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
