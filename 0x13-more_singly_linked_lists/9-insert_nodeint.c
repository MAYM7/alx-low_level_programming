#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * in a listint_t list
 * @head: A pointer to a pointer to the head of the list
 * @idx: The index at which to insert the new node (starting at 0)
 * @n: The integer value for the new node
 *
 * Return: The address of the new node, or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	while (current != NULL)
	{
		if (i == idx - 1)
		{
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
		i++;
	}

	free(new_node);
	return (NULL);
}
