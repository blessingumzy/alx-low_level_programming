#include "lists.h"


/**
* get_nodeint_at_index - returns the node at a certain index in a connected listing
* @head: first node within the connected listing
* @index: index of the node to return
*
*
*
* RETURN: pointer to the node we are searching out, or NULL
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
 unsigned int i = 0;
 listint_t *temp = head;

 while (temp && i < index)
 {
 temp = temp->next;
 ++i;
 }

 return (temp ? temp : NULL);
}

