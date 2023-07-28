#include "lists.h"

/**
  *add_node_end - Adds a new node at the end of list_t
  *@head: Pointer to the end of list_t
  *@str: String to be added to the list_t
  *
  *Return: return NULL, else the address of the new element.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	char *dupli;
	int len;
	list_t *first, *last;

	first = malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);

	dupli = strdup(str);
	if (str == NULL)
	{
		free(first);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	first->str = dupli;
	first->len = len;
	first->next = NULL;

	if (*head == NULL)
		*head = first;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = first;
	}

	return (*head);
}
