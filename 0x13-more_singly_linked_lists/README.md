Project Title: More Singly Linked Lists
Project Description
This project consists of several tasks that involve working with singly linked lists in C. Each task is designed to help you understand and manipulate linked lists. Below, you will find a brief description of each task.

Task 0: Print List
Create a function that prints all the elements of a listint_t list.
Prototype: size_t print_listint(const listint_t *h);
Return: The number of nodes in the list.
You are allowed to use printf.

Task 1: List Length
Write a function that returns the number of elements in a listint_t list.
Prototype: size_t listint_len(const listint_t *h);

Task 2: Add Node
Create a function that adds a new node at the beginning of a listint_t list.
Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Return: The address of the new element, or NULL if it fails.

Task 3: Add Node at the End
Write a function that adds a new node at the end of a listint_t list.
Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Return: The address of the new element, or NULL if it fails.

Task 4: Free List
Create a function that frees a listint_t list.
Prototype: void free_listint(listint_t *head);

Task 5: Free List (Part 2)
Write a function that frees a listint_t list and sets the head to NULL.
Prototype: void free_listint2(listint_t **head);

Task 6: Pop
Create a function that deletes the head node of a listint_t linked list and returns the head node's data.
Prototype: int pop_listint(listint_t **head);
Return 0 if the linked list is empty.

Task 7: Get Node at Index
Write a function that returns the nth node of a listint_t linked list.
Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
Return NULL if the node does not exist.

Task 8: Sum List
Create a function that returns the sum of all the data (n) in a listint_t linked list.
Prototype: int sum_listint(listint_t *head);
Return 0 if the list is empty.

Task 9: Insert Node at Index
Write a function that inserts a new node at a given position in a listint_t list.
Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
Return the address of the new node, or NULL if it fails.

Task 10: Delete Node at Index
Create a function that deletes the node at a specified index in a listint_t linked list.
Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
Return 1 if it succeeds and -1 if it fails.


For each task, you can compile and test your code using the provided main programs. Be sure to follow the project's guidelines, including the use of provided prototypes, allowed functions, and style conventions.
