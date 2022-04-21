# Description for each function
1. 0-print_list.c
   * A function that prints all the elements of a list_t list where the prototype is size_t print_list(const list_t *h) and return numbers of nodes. if str is NULL print [0] (nil).
2. 1-list_len.c
   * A function that returns the number of elements in a linked list_t list where the prototype is size_t list_len(const list_t *h).
3. 2-add_node.c
   * A function that adds a new node at the beginning of a list_t list where the prototype is list_t *add_node(list_t **head, const char *str) and returns the address of the new element, or NULL if it failed. str needs to be duplicated and allowed to use strdup.
