#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) in a listint_t list
 * @head: A pointer to the head of the list
 *
 * Return: The sum of all data values (n) in the list, or 0 if the list is '\0'
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
