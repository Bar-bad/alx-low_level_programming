#include "lists.h"
/**
 * add_nodeint_end - function that adds a node at the end of a linked list
 * @head: a pointer to the first element in the list
 * @n: data to be inserted in the new elements
 *
 * Return: the pointer to the new node
 * If it fails, NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newNode;

	return (newNode);
}
