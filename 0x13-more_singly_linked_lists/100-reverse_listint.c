#include "lists.h"


/**
* reverse_listint - reverses a related list
* @head: pointer to the first node inside the listing
*
* return: pointer to the first node within the new listing
*/


listint_t *reverse_listint(listint_t **head)
{
 listint_t *prev = NULL;
 listint_t *next = NULL;

 while (*head)
 {
 next = (*head)->next;
 (*head)->next = back;
 back = *head;
 *head = next;
 }

 *head = back;

 return (*head);
}

