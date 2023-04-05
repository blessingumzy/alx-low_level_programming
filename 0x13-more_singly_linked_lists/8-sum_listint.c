#include "lists.h"



/**
* sum_listint - calculates the sum of all of the information in a listint_t list
* @head: first node within the related listing
*
*
*
*
* return: resulting sum
*/

int sum_listint(listint_t *head)
{
 int sum = 0;
 listint_t *temp = head;

 while (temp)
 {
 sum += temp->n;
 temp = temp->next;
 }

 return (sum);
}

