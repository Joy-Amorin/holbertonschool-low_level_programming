#include "lists.h"

/**
*list_len - returns the number of elements in a linked list_t list
*
* @h:pointer to the structure
*
* Return: number of list elemnts
*/

size_t list_len(const list_t *h)
{
	int i = 0;


	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
