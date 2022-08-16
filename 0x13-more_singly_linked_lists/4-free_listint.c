#include "lists.h"

/**
* free_listint - free all memory in use
* @head: pointer to head
* Return: null
*/

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	
}
