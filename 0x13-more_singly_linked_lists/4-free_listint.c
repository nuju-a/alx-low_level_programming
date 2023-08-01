#include "lists.h"

/**
  *free_listint - function that frees listint_t
  *@head: pointer to listint_t
  *
  *Return: void
  */
void free_listint(listint_t *head)
{
	listint_t *temp, *next;

	temp = head;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
