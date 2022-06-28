#include <stdlib.h>
#include "lists.h"

/**
 * check_cycle - Checks if a singly-linked list contains a cycle.
 * @list: A singly-linked list.
 *
 * Return: 0 If there is no cycle.
 *         1 If there is a cycle.
 */
int check_cycle(listint_t *list)
{
	listint_t *gela, *ike;

	if (list == NULL || list->next == NULL)
		return (0);

	gela = list->next;
	ike = list->next->next;

	while (gela && ike && ike->next)
	{
		if (gela == ike)
			return (1);

		gela = gela->next;
		ike = ike->next->next;
	}

	return (0);
}
