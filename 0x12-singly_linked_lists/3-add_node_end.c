#include "lists.h"



/**

 * add_node_end - adds node at end of string

 * @head: pointer to string

 * @str: int/char

 *

 * Return: address of new element or NULL

 */



list_t *add_node_end(list_t **head, const char *str)

{



	list_t *current;

	list_t *new_node;



	int c;





	current = *head;

	while (current && current->next != NULL)

		current = current->next;





	for (c = 0; dup_str[c] != '\0'; c++)

		;



	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)

	{

		free(new_node);

		return (NULL);

	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)

	{

		free(new_node);

		return (NULL);

	}

	new_node->len = c;

	new_node->next = NULL;



	if (current)

		current->next = new_node;

	else

		*head = new_node;

	return (new_node);

}
