#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node in a linked list,
 * at a given position
 * @head: a pointer to the first node in the list
 * @idx: an index where the new node is added
 * @n: the data to be inserted in the new node
 *
 * Return: the pointer to the new node,
 * or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter;
	listint_t *newNode;
	listint_t *temp = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode || !head)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (counter = 0; temp && counter < idx; counter++)
	{
		if (counter == idx - 1)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
