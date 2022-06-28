#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has
 * a cycle in it
 * @list: pointer to the list
 * Return: 0 if there is no cycle,
 * 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *p4;
	listint_t *prev;

	p4 = list;
	prev = list;
	while (list && p4 && p4->next)
	{
		list = list->next;
		p4 = p4->next->next;

		if (list == p4)
		{
			list = prev;
			prev =  p4;
			while (1)
			{
				p4 = prev;
				while (p4->next != list && p4->next != prev)
				{
					p4 = p4->next;
				}
				if (p4->next == list)
					break;

				list = list->next;
			}
			return (1);
		}
	}

	return (0);
}
