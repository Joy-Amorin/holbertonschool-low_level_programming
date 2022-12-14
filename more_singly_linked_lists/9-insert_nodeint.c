#include "lists.h"

/**
  * insert_nodeint_at_index - insert a new node at a given position.
  * @head: pointer to the head node of the linked list.
  * @idx: index of the list to add node
  * @n: data(n) for the new node.
  *
  * Return: The address of the new node, or NULL if it failed.
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t)), *end = *head;
	unsigned int i = 0;

	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for ( ; end; end = end->next)
	{
		if (idx == i + 1)
		{
			new->next = end->next;
			end->next = new;
		}
		i++;
	}
	if (idx > i)
		return (NULL);
	return (new);
}
