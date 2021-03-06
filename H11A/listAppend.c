struct node {
    int data;
    struct node *next;
}

// appends list2 to list 1 and returns the new list (the head of the list)
struct node *list_append(struct node *list1, struct node *list2) {

    // edge case: if list1 is empty list
    if (list1 == NULL) {
        return list2;
    }

    struct node *curr = list1;

    // we want to stop at the second last node
    while (curr->next != NULL) {
        curr = curr->next;
    }
    
    curr->next = list2;

    return list1; 
}
