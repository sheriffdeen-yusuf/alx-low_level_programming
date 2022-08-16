#include "lists.h"

/**
* print_listint - print all data in the list
* @h: pointer to head
* Return - number of data
*/

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
