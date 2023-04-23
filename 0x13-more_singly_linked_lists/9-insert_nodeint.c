#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node to a list at a given position.
 * @head: A pointer to the address of the head of the list.
 * @idx: The index of the list where the new node should be added.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL, else the address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *node_copy = *head;
	unsigned int numb;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = node_copy;
		*head = new_node;
		return (new_node);
	}

	for (numb = 0; numb < (idx - 1); numb++)
	{
		if (node_copy == NULL || new_node->next == NULL)
			return (NULL);

		new_node = node_copy->next;
	}

	new_node->next = node_copy->next;
	node_copy->next = new_node;

	return (new_node);
}
