#include "lists.h"

/**
* insert_nodeint_at_index - inserts a brand new node in a related listing,
* at a given role
* @head: pointer to the primary node within the listing
* @idx: index in which the brand new node is introduced
* @n: records to insert within the new node
*
* RETURN: pointer to the brand new node, or NULL
*/


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
 unsigned int i;
 listint_t *newly;
 listint_t *temp = *head;

 new = malloc(sizeof(listint_t));
 if (!newly || !head)
 return (NULL);

 newly->n = n;
 newly->next = NULL;

 if (idx == 0)
 {
 newly->next = *head;
 *head = newly;
 return (newly);
 }

 for (i = 0; temp && i < idx; i++)
 {
 if (i == idx - 1)
 {
 newly->next = temp->next;
 temp->next = newly;
 return (newly);
 }
 else
 temp = temp->next;
 }

 return (NULL);
}

