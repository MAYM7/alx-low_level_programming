#include <string.h>
#include "lists.h"

/**
 * add_node - a function that add a new node at the end of a list_t
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 * Return: the address of the new element, or NULL if fail
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dstr;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dstr = strdup(str);
	if (dstr == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dstr;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
