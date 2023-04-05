#include "lists.h"

/**
*  main - check the code
* add_nodeint_end - provides a node at the cease of a linked list
* 
*
* @head: pointer to the primary element in the listing
* @n: records to insert in the new element
*
* return: pointer to the brand new node, or NULL if it fails
*/


listint_t *add_nodeint_end(listint_t **head, const int n)
{
 listint_t *newly;
 listint_t *temp = *head;

 newly = malloc(sizeof(listint_t));
 if (!new)
 return (NULL);

 newly->n = n;
 newly->next = NULL;

 if (*head == NULL)
 {
 *head = newly;
 return (newly);
 }

 while (temp->next)
 temp = temp->next;

 temp->next = newly;

 return (newly);
}

