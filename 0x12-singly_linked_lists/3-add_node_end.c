#include "lists.h"

/**
 * add_node_end - function that adds a new node at
 * the end of a list_t list
 * @head: pointer to a headNode
 * @str: pointer to the string
 * Return: new list node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	
	while (*head->next != NULL)
		*head = (*head)->next;
	*head->next = newNode;
	return (newNode);
}
