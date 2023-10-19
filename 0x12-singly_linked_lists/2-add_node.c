#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t.
 * @head: A pointer to the head of the list_t.
 * @str: The string to be added to the list_t.
 *
 * Return: returns NULL at fail,else - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dupli;
	int len;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	dupli = strdup(str);
	if (dupli == NULL)
	{
		free(temp);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	temp->str = dupli;
	temp->len = len;
	temp->next = *head;

	*head = temp;

	return (temp);
}
