#include "lists.h"
/**
 * sum_listint -  function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * @head: pointer to a head node
 * Return: sum of all data(n)
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
