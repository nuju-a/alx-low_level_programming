#include "lists.h"

/**
  *free_listint2 - func frees listint_t
  *@head: pointer to pointer to listint_t list
  *
  *Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *temp, *last;


	if ((*head) == NULL)
	{
		return;
	}
	last = *head;

	while (last != NULL)
	{
		temp = last;
		last = last->next;
		free(temp);
		}
	*head = NULL;
}
