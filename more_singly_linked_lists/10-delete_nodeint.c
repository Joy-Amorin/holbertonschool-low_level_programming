#include "lists.h"

/**
  * delete_nodeint_at_index - deletes the node at index  linked list..
  * @head: pointer to the heade node
  * @index: Index of the list where the node should be deleted.
  *
  * Return: 1 if it succeeded, -1 if it failed.
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head, *delete;
	unsigned int i = 0;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	for (; tmp; tmp = tmp->next)
		i++;
	if (index > i)
		return (-1);
	tmp = *head;
	for (i = 0; i < index - 1; i++)
		tmp = tmp->next;
	delete = tmp->next;
	tmp->next = tmp->next->next;
	delete->next = NULL;
	free(delete);
	return (1);
}
