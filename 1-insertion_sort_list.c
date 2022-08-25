#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list in ascending
 * @list: list
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current_node, *swap_node, *previous_node;

	if (list == NULL || *list == NULL)
		return;

	current_node = *list;
	while ((current_node = current_node->next))
	{
	swap_node = current_node;
	while (swap_node->prev && swap_node->n < swap_node->prev->n)
	{
		previous_node = swap_node->prev;
		if (swap_node->next)
			swap_node->next->prev = previous_node;
		if (previous_node->prev)
			previous_node->prev->next = swap_node;
		else
			*list = swap_node;
		previous_node->next = swap_node->next;
		swap_node->prev = previous_node->prev;
		swap_node->next = previous_node;
		previous_node->prev = swap_node;

		print_list(*list);

		}
	}
}
