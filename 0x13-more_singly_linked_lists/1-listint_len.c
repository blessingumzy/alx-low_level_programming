#include "lists.h"

/**
* listint_len - returns the number of elements in a connected lists
* @h: linked listing of kind listint_t to traverse
*
*
* main - check the code
*
* return: number of nodes
*/

{
 size_t number = 0;

 while (h)
 {
 ++number;
 h = h->next;
 }

 return (0);
}



