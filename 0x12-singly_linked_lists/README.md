### Project 0: Print list

#### Description
The "print_list" function is designed to print all the elements of a singly linked list.

#### Prototype
size_t print_list(const list_t *h);
 

#### Return Value
- The number of nodes.

#### Format
If `str` is NULL, it will print "[0] (nil)".

#### Example
 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}
 

 

### Project 1: List length

#### Description
The "list_len" function returns the number of elements in a singly linked list.

#### Prototype
 
size_t list_len(const list_t *h);
 

#### Return Value
- The number of elements.

#### Example
 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = list_len(head);
    printf("-> %lu elements\n", n);
    free(new->str);
    free(new);
    return (0);
}
 

 

### Project 2: Add node at the beginning

#### Description
The "add_node" function adds a new node at the beginning of a singly linked list.

#### Prototype
 
list_t *add_node(list_t **head, const char *str);
 

#### Return Value
- The address of the new element or NULL if it fails.

#### Example
 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
    list_t *head;

    head = NULL;
    add_node(&head, "Alexandro");
    add_node(&head, "Asaia");
    add_node(&head, "Augustin");
    add_node(&head, "Bennett");
    // Add more nodes as needed.
    print_list(head);
    return (0);
}
 

 

### Project 3: Add node at the end

#### Description
The "add_node_end" function adds a new node at the end of a singly linked list.

#### Prototype
 
list_t *add_node_end(list_t **head, const char *str);
 

#### Return Value
- The address of the new element or NULL if it fails.

#### Example
 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
    list_t *head;

    head = NULL;
    add_node_end(&head, "Anne");
    add_node_end(&head, "Colton");
    add_node_end(&head, "Corbin");
    // Add more nodes as needed.
    print_list(head);
    return (0);
}
 

 

### Project 4: Free list

#### Description
The "free_list" function is designed to free a singly linked list.

#### Prototype
 
void free_list(list_t *head);
 

#### Example
 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

int main(void)
{
    list_t *head;

    head = NULL;
    add_node_end(&head, "Bob");
    add_node_end(&head, "&");
    add_node_end(&head, "Kris");
    // Add more nodes as needed.
    print_list(head);
    free_list(head);
    head = NULL;
    return (0);
}
