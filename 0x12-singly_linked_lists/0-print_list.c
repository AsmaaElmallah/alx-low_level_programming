 #include <stdio.h>
#include "lists.h"
/**
 * print_list - Prints all the elements of a list_t list.
 * @h: A pointer to the first node of the list.
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
printf("[%d] %s\n", h->len, h->str != NULL ? h->str : "(nil)");
count++;
h = h->next;
}
return (count);
}
