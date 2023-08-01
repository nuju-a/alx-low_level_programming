#include "lists.h"

/**
  *listint_len - Function that returns the number of elements in listint_t
  *@h: The pointer parameter to the listint_t list
  *
  *Return: returns the number of elements
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	const listint_t *temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
