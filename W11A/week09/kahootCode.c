#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct node {
    int data;
    struct node *next;
};

struct node *createNode(int value);

int main(void) {

    struct node *first = createNode(1);
    struct node *second = createNode(2);
    first->next = second;

    printf("The second value in my list is %d\n", first->next->data);

    free(first->next);
    first->next = NULL;
    
    printf("The second value in my list is %d\n", second->data);

    return 0;
}

struct node *createNode(int value) {
    struct node *new = malloc(sizeof(struct node));
    assert(new != NULL);

    new->data = value;
    new->next = NULL;

    return new;
}