#include "lists.h"

/**
 * free_dlistint - free list
 * @head: ptr to the beginning of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_list;

	for (; head != NULL;)
	{
		free_list = head->next;
		free(head);
		head = free_list;
	}
}
