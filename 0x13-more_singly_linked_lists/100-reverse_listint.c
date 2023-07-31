#include "lists.h"
/**
 * reverse_listint - functio that reverses a linked list
 * @head: a pointer to the first node in the list
 *
 * Return: the pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previousNode = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previousNode;
		previousNode = *head;
		*head = next;
	}

	*head = previousNode;

	return (*head);
}
