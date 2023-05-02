#include "lists.h"

/**
 * sum_listint - Computes the sum of data in a listint_t list
 * @head: first node 
 *
 * Return: the sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
