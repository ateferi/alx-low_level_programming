#include "lists.h"

/**
 * pop_listint - Delete the head node of a list.
 * @head: A pointer to the address of the
 *        head of the list.
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!(*head))
		return (0);

	temp = *head;
	data = temp->n;
	temp = temp->next;

	free(*head);

	*head = temp;

	return (data);
}
