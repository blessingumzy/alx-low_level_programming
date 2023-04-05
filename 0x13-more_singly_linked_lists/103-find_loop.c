#include "lists.h"

/**
* find_listint_loop - reveals the loop in a connected list
* @head: connected list to look for
*
* go back: address of the node wherein the loop begins, or NULL
*/

listint_t *find_listint_loop(listint_t *head)
{
 listint_t *slow = head;
 listint_t *fast = head;

 if (!head)
 return (NULL);

 while (slow && fast && fast->next)
 {
 fast = fast->next->next;
 slow = slow->next;
 if (fast == slow)
 {
 slow = head;
 while (slow != fast)
 {
 slow = slow->next;
 fast = fast->next;
 }
 return (fast);
 }
 }

 return (NULL);
}
