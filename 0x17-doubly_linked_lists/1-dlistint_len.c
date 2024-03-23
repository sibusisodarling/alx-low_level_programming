#include "lists.h"

/**
 * dlistint_len - to find the length of the linked list
 * @h: pointer to the head of the list
 * Return: the number
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len_of_list;

	for (len_of_list = 0; h != NULL; len_of_list++)
		h = h->next;

	return (len_of_list);
}
