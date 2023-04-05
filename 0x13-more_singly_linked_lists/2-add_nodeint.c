#include "lists.h"

/**
* main - check the code
* add_nodeint - adds a new node at the start of a linked list
* 
* @head: pointer to the first node inside the list
* @n: data to insert in that new node
*
*
*
* return: pointer to the new node, or NULL if it fails
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newly;

newly = malloc(sizeof(listint_t));
if (!newly)
return (NULL);

newly->n = n;
newly->next = *head;
*head = newly;

return (newly);
}

