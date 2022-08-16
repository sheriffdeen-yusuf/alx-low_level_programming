#include "lists.h"

/**
* add_nodeint_end - add a nee node at the end of the list
* @head: pointer to head
* @n: dsta for new node
* Return: pointer to new node created
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last_node = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	last_node->next = new_node;


	return (new_node);
}
