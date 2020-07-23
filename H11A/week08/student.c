#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

// declare new struct type
struct student {
    char name[100];
    int zID;
    double mark;
    struct student *next;
};

struct student *createStudent(char *name, int zID, double mark);
void printStudent(struct student *current);
void printClass(struct student *head);

int main(void) {
    // type name = value
    // int variable = 10;
    
    // declare a struct to store frankie's data
    struct student firstStudent;
    firstStudent.zID = 5151515;
    firstStudent.mark = 60.2;
    
    // WRONG: firstStudent.name = "Frankie";
    strcpy(firstStudent.name, "Frankie");
    
    // create a new student by calling createStudent function
    struct student *second = createStudent("Chicken", 5252525, 71);

    
    printStudent(&firstStudent);
    printStudent(second);


    // make a class linked list
    struct student *h11a = &firstStudent;
    // firstStudent.next = second;
    h11a->next = second;
    // hlla = first -> second -> NULL

    printClass(h11a);

    free(second);

    return 0;
}


// allocates memory for new student struct and returns address
struct student *createStudent(char *name, int zID, double mark) {
    struct student *new = malloc(sizeof(struct student));
    
    // malloc may not succeed so error check
    if (new == NULL) {
        printf("Oh no!! Ran out of memory!! Bye Bye!!\n");
        exit(0);
    } 
    // *(new).zID
    new->zID = zID;
    new->mark = mark;
    strcpy(new->name, name);
    new->next = NULL;

    return new;
}

// prints out fields of given student struct
void printStudent(struct student *current) {
    printf("The student's name is %s, their zID is %d and their mark is %lf\n",
                                     current->name, current->zID, current->mark);
}


// print out the zID's of all students in the class
// where head is the start of the roll
void printClass(struct student *head) {
    
    // create a copy of head
    struct student *curr = head;
    while (curr != NULL) {
        printf("%d\n", curr->zID);
        // update the pointer to point to the next node (struct)
        // in the linked list
        curr = curr->next;
    }

}


















