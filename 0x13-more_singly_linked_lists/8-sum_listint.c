#include "lists.h"
/**
 * sum_listint - function that calculates the sum of all the data
 * in a listint_t list
 * @head: the first node in the linked list
 *
 * Return: the resulting sum of the data
 */
int sum_listint(listint_t *head)
{
	int sumofData = 0;
	listint_t *temp = head;

	while (temp)
	{
		sumofData += temp->n;
		temp = temp->next;
	}

	return (sumofData);
}
