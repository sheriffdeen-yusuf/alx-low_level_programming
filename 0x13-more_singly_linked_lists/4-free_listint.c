#include "lists.h"

/**
* free_listint - free all memory in use
* @head: pointer to head
* Return: null
*/

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (head)
	{
		free(head);
		tmp = tmp->next;
		head = tmp;
	}
	
}
