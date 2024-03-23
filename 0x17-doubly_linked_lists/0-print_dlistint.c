#include "lists.h"

/**
 * print_dlistint - function to print the list
 * @h: pointer to the head
 * Return: count
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t entire_list;

	for (entire_list = 0; h != NULL; entire_list++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (entire_list);
}
