#include "lists.h"
/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: the linked list to be searched through
 *
 * Return: the address of the node where the loop starts,
 * or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slowPointer = head;
	listint_t *fastPointer = head;

	if (!head)
		return (NULL);

	while (slowPointer && fastPointer && fastPointer->next)
	{
		fastPointer = fastPointer->next->next;
		slowPointer = slowPointer->next;

		if (fastPointer == slowPointer)
		{
			slowPointer = head;

			while (slowPointer != fastPointer)
			{
				slowPointer = slowPointer->next;
				fastPointer = fastPointer->next;
			}
			return (fastPointer);
		}
	}
	return (NULL);
}
