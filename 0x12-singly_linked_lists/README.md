#include "lists.h"

#include <stdio.h>



/**

 * print_list - print elements of linkedlist

 * @h: linked list

 *

 * Return: number of nodes

 */



size_t print_list(const list_t *h)

{

	size_t nbr_nodes = 0;

	const list_t *current = h;



	while (current != NULL)

	{

		printf("[%d] %s\n", current->len,

		current->str != NULL ? current->str : "(nil)");

		current = current->next;

		nbr_nodes++;

	}

	return (nbr_nodes);

}

 22  

0x12-singly_linked_lists/README.md

@@ -0,0 +1,22 @@

# 0x12. C - Singly linked lists  

- C  

- Algorithm  

- Data structure  

## More Info  

#### Please use this data structure for this project:  

```

/**

 * struct list_s - singly linked list

 * @str: string - (malloc'ed string)

 * @len: length of the string

 * @next: points to the next node

 *

 * Description: singly linked list node structure

 */

typedef struct list_s

{

    char *str;

    unsigned int len;

    struct list_s *next;

} list_t;

```
