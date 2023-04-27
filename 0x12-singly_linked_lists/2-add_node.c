#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add new node at the start of list_t
 * @head: pointer 
 * @str: string
 * Return: the adress of new element
 * or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *aNode;
unsigned int length = 0;

	aNode = malloc(sizeof(list_t));
	if (aNode == NULL)
	{
		free(aNode);
		return (NULL);
	}
	aNode->str = strdup(str);
	while (str[length] != '\0')
	{
		length++;
	}
	aNode->len = length;
	if (*head != NULL)
		aNode->next = *head;
	if (*head == NULL)
		aNode->next = NULL;
	*head = aNode;
	return (*head);
}

