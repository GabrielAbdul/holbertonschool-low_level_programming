#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node = adds node to the front of the linked list
 * 
 * @head: first node in the linked list
 * @str: string to be duplicated
 *
 * Return: adress of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node_added = malloc(sizeof(list_t));
	list_t *checker;

	if (!node_added)
		return (NULL);
	if (*head == NULL)
	{
		*head = node_added;
		node_added->next = NULL;
		return (*head);
	}
	
	checker = *head;

	while (checker->next)
		checker = checker->next;

	checker->next = node_added;
	node_added->str = strdup(str);
	node_added->len = _strlen(str);
	node_added->next = NULL;

	return (*head);
	
}
/**
 * _strlen - returns string length
 *
 * @s: string to calculate length
 *
 * Return: length of string
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
