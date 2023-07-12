#include "search_algos.h"
#include <math.h>

/**
 * jump_list - a function that searches for a value
 *  in a sorted list of integers
 *  using the Jump search algorithm.
 *
 * @list: a pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: the value to search for
 *
 * Return: a pointer to the first node where value is located
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t current, i, m;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	m = (size_t)sqrt((double)size);
	current = 0;
	i = 0;

	do {
		prev = list;
		i++;
		current = i * m;

		while (list->next && list->current< current)
			list = list->next;

		if (list->next == NULL && current != list->current)
			current = list->current;

		printf("Value checked at index [%d] = [%d]\n", (int)current, list->n);

	} while (current < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->current, (int)list->current);

	for (; prev && prev->current <= list->current; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->current, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
