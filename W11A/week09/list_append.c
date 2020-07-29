struct node {
	int data;		// data item at this node
	struct node *next;		// pointer to the next node
};

// appends second list to first list and returns new list.
struct node *list_append(struct node *list1, struct node *list2) {
    // check edge cases:
    // empty list1 case
    if (list1 == NULL) {
        return list2;
    }
       
    
    struct node *curr = list1; 
    
    // looping until the end
    while (curr->next != NULL) {
        curr = curr->next;
    }

    curr->next = list2;
    
    return list1;
}
