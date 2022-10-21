#include "lists.h"
#include <stdio.h>
/**
* print_list - prints elements of list_t
* @h: pointer to the head of the list
* Return: number of nodes in list
*/
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	lst = h;
	for (i = 0; lst; i++)
	{
	printf("[%u] %s\n", tmp->len, tmp->str);
	tmp = tmp->next;
	}
	return (i);
}
