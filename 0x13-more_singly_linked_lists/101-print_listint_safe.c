#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - function that counts the number of unique nodes
 * in a looped listint_t linked list
 * @head: a pointer to the head of the listint_t to be checked
 *
 * Return: 0, if the list is not looped
 * the number of unique nodes in the list, if otherwise
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *slowerPointer, *fasterPointer;
	size_t numberofNodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slowerPointer = head->next;
	fasterPointer = (head->next)->next;

	while (slowerPointer)
	{
		if (fasterPointer == slowerPointer)
		{
			slowerPointer = head;

			while (slowerPointer != fasterPointer)
			{
				numberofNodes++;
				slowerPointer = slowerPointer->next;
				fasterPointer = fasterPointer->next;
			}

			slowerPointer = slowerPointer->next;

			while (slowerPointer != fasterPointer)
			{
				numberofNodes++;
				fasterPointer = fasterPointer->next;
			}

			return (numberofNodes);
		}
		slowerPointer = slowerPointer->next;
		fasterPointer = (fasterPointer->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - function that prints a listint_t list safely
 * @head: a pointer to the head of the listint_t list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t numberofNodes, index = 0;

	numberofNodes = looped_listint_len(head);

	if (numberofNodes == 0)
	{
		for (; head != NULL; numberofNodes++)
		{
			printf("[%p] %d\n", (void *) head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < numberofNodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (numberofNodes);
}
