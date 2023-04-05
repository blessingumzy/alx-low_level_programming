#include "lists.h"


/**
* 
* pop_listint - deletes the pinnacle node of a related listing
* @head: pointer to the first detail in the connected listing
*
*
*
* return: the statistics inside the elements that became deleted, or 0 if the listing is empty
*/

int pop_listint(listint_t **head)
{
 listint_t *temp;
 int number;

 if (!head || !*head)
 return (0);

 number = (*head)->n;
 temp = (*head)->next;
 free(*head);
 *head = temp;

 return (number);
}

