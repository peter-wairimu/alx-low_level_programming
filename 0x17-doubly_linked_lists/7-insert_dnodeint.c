#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node;
dlistint_t *current;
dlistint_t *prev;
unsigned int i;

if (h == NULL)
return (NULL);

current = *h;
prev = NULL;

if (idx == 0)
{
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = current;
new_node->prev = NULL;
if (current != NULL)
current->prev = new_node;
*h = new_node;
return (new_node);
}

for (i = 0; i < idx; i++)
{
if (current == NULL)
return (NULL);
prev = current;
current = current->next;
}

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = current;
new_node->prev = prev;
prev->next = new_node;
if (current != NULL)
current->prev = new_node;
return (new_node);
}
