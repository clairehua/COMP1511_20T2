#include "queue.h"
#include <stdlib.h>

struct queueInternals {
    struct queueNode *front;
    struct queueNode *back;
};

struct queueNode {
    int data;
    struct queueNode *next;
};


// static on helpers function
static struct queueNode *newNode(int value);

// Make and return a new queue 
Queue newQueue(void){
    Queue new = malloc(sizeof(struct queueInternals));
    
    if (new == NULL) {
        printf("Oh no! Ran out of memory!! :o\n");
        exit(1);
    }
    
    // PLEASE initilise all fields
    new->front = NULL;
    new->back = NULL;
    
    return new;
}

// Add a queueNode to the end of the list (just after back)
void enqueue(Queue q, int item) {
    // make a new queueNode
    struct queueNode *new = newNode(item);
    
    // empty list
    if (q->front == NULL) {
        q->front = new;
        q->back = new;
    } else {
        q->back->next = new;
        q->back = new;
    }
}

// Create a new queueNode
static struct queueNode *newNode(int value) {
    struct queueNode *new = malloc(sizeof(struct queueNode));
    
    if (new == NULL) {
        printf("Oh no! Ran out of memory!! :o\n");
        exit(1);
    }
    
    // initilise all fields!!!
    new->data = value;
    new->next = NULL;

    return new;
}

//Remove a queueNode from the beginning of the list (at the start) and return
// the value of data at the start node
// we should free the deleted node
int dequeue(Queue q) {
    if (q->front == NULL) {
        printf("No more elements!! bye!!\n");
        exit(1);
    }
    
    int start_value = q->front->data;
    struct queueNode *tmp = q->front;
    
    q->front = q->front->next;
    free(tmp);
    
    return start_value;
}





