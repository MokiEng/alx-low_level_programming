#include "lists.h"
/**
 * listint_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	unsigned int counter = 0;

	tmp = h;
	while (tmp)
	{
		/*printf("%d\n", h->n);*/
		counter++;
		tmp = tmp->next;
	}
	return (counter);
}
