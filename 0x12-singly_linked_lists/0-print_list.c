#include "lists.h"

/**
* print_list -prints set in the list
* h: this is the pointer of thr head node
* Return the size of elements in the list
*/

size_t print_list(const list_t *h)
int n = 0;

while (h)
{
if (h->str == NULL)
{
printf("[0] ");
printf("(nil)\n");
}
else
{
printf("[%i] ", h->len);
printf("%s\n", h->str);
}

n++;
h += 1;
}

return (n);
}
