#include "lists.h"
/**
 * free_listint_safe - function that frees a linked list
 * @h: a pointer to the first node in the linked list
 *
 * Return: the number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lengthofString = 0;
	int diff_currentNnext;
	listint_t *temporaryPointer;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff_currentNnext = *h - (*h)->next;

		if (diff_currentNnext > 0)
		{
			temporaryPointer = (*h)->next;
			free(*h);
			*h = temporaryPointer;
			lengthofString++;
		}

		else
		{
			free(*h);
			*h = NULL;
			lengthofString++;
			break;
		}
	}

	*h = NULL;
	return (lengthofString);
}
