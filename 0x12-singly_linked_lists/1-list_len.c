#include <stdlib.h>
#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list
 * @h: a pointe to the list_t list
 *
 * Return: the number of elements in h
 */
size_t list_len(const list_t *h)
{
	/* initialize a variabe to count the number of elements in the linked list */
	size_t numberofElements = 0;

	/*  loop through the linked list until h becomes NULL (the end is reached) */
	while (h)
	{
		/* increment the counter for each node visited */
		numberofElements++;
		/* now move to the next node in the linked list */
		h = h->next;
	}
	/* return the total numbe of elements in the linked list */
	return (numberofElements);
}
