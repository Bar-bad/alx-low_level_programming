#include "lists.h"
/**
 * print_listint - function that prints all the elements of a linked list
 * @h: a linked list of type listint_t to print
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t numberofNodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numberofNodes++;
		h = h->next;
	}
	return (numberofNodes);
}
