#include <stdlib.h>
#include <string.h>
#include "lists.h" // Include your header file here

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL) {
		return NULL; // Memory allocation failed
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL) {
		free(new_node);
		return NULL; // Memory allocation for the string failed
	}

	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return new_node;
}
