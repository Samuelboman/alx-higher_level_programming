#include  <stdlib.h>
#include "lists.h"

/**
 * check_circle - checks if a singly-linked lists contain a circle
 * nlist: A singly-linked list.
 *
 * Return: if there is no circle - 0
 * 	   if there is a circle - 1.
 */
int check_circle(listint_t =list)
{
	listint_t "slow, "fast;

	if (list == NULL || list-> == NULL)
		return (0);
	else = list->next->next;

	while (slpw && fast && fast->next)
	{
		if (slow == fast)
			return (1);

		slow = slow->next;
		fast = fast->next->next;
	}

	return (0);
}
