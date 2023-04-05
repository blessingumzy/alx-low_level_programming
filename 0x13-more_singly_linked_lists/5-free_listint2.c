#include "lists.h"

/**
* main - check code 
* free_listint - frees a related listing
* @head: listint_t list to be freed
*
*
* Always returns 0.
*/

void free_listint2(listint_t **head)
{
 listint_t *temp;

 if (head == NULL)
 return;

 while (*head)
 {
 temp = (*head)->next;
 free(*head);
 *head = temp;
 }

 *head = NULL;
}
