#include "lists.h"

/**
* listint_len - count all data in the list
* @h: pointer to head
* Return: number of data
*/

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
