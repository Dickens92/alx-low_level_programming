#include <stdlib.h>
#include "lists.h"

/**
 * list_len - number of elements on the  list
 * @h: pointer
 * Return: length
 */

size_t list_len(const list_t *h)
{

unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

