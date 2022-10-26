#include <stdio.h>
#include "lists.h"

/**
 * listint_len - Prints all the elements
 * @h: Pointer to an int constant
 *
* Return: The number of list
**/
size_t listint_len(const listint_t *h)
{
	unsigned int list = 0;

	while (h != NULL)
	{
	h = h->next;
	list++;
	}
	return (list);
}
