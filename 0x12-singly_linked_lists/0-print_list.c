#include <stdio.h>
#include "lists.h"
/**
 * print_list - function that prints all the elements of a linked list
 * @h: a pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	/* Variable to count the number of nodes printed, initialized */
	size_t nodeCounter = 0;

	/* loop through the linked list until h becomes NULL (the end is reached) */
	while (h)
	{
		/* check if the string in the current node is NULL */
		if (!h->str)
			/* print "[0] (nil)" if the string is NULL */
			printf("[0] (nil)\n");
		else
			/* print the lenght and the string if the string is not NULL */
			printf("[%u] %s\n", h->len, h->str);
	/* now move to the next node in the linked list */
	h = h->next;
	/* increment the count of nodes printed */
	nodeCounter++;
	}
	/* return the totall number of nodes printed */
	return (nodeCounter);
}
