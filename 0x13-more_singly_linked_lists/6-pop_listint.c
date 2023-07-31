#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: a pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * If the list is empty, 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int numberofNodes;

	if (!head || !*head)
		return (0);

	numberofNodes = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (numberofNodes);
}
