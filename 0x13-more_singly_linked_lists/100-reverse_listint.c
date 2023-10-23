#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list using recursion
 * @head: A pointer to a pointer to the head of the list
 *
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first, *rest;

	if (*head == NULL || (*head)->next == NULL)
		return (*head);

	first = *head;
	rest = first->next;

	reverse_listint(&rest);

	first->next->next = first;
	first->next = NULL;
	*head = rest;

	return (*head);
}
