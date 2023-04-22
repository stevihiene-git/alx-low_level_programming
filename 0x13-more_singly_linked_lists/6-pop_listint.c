#include "lists.h"

/**
 * pop_listint - Deletes the head node of a list of type listint_t.
 * @head: A pointer to the address of the head to the list of type listint_t.
 *
 * Return: If the linked list is empty return 0, else return the head node.
 */
int pop_listint(listint_t **head)
{
	listint_t *tempo;
	int ret_val;

	if (*head == NULL)
		return (0);

	tempo = *head;
	ret_val = (*head)->n;
	*head = (*head)->next;

	free(tempo);

	return (ret_val);
}
