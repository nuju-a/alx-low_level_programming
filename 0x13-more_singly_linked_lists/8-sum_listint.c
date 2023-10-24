#include "lists.h"

/**
  *sum_listint - func. sums all the data in listint_t list
  *@head: The pointer to the head of listint_t
  *
  *Return: returns sum
  */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
