#include "lists.h"
#include "4-free_listint.c"

/**
*free_listint2 - free list
*
*@head: pointer to firts noede
*/

void free_listint2(listint_t **head)
{	
	if (head)
	{
		free_listint(*head);
		*head = NULL;
	}
}
