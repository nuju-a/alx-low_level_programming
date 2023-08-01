#include "lists.h"

/**
  *listint_t *add_nodeint - Func. adds node at the beginning of listint_t
  *@head: Pointer to pointer of head in listint_t
  *@n: new data of listint_t
  *
  *Return: address of the new element
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;
	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = (*head);
	(*head) = temp;

	return (temp);
}
