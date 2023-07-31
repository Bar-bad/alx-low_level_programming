#include "lists.h"
/**
 * listint_len - funcion that returns the number of elements in a linked list
 * @h: a linked list of ype listint_t to traverse
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numberofNodes = 0;

	while (h)
	{
		numberofNodes++;
		h = h->next;
	}
	return (numberofNodes);
}
