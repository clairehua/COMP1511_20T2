#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 15


// define a student struct
struct student {
    char name[MAX];
    int zID;
    double mark;
    struct student *next;
};

struct student *createStudent(char *name, int zID, double mark);
void printStudent(struct student *stu);

int main(void) {
    // type name;
    //int num_input;
   
    // type         name 
    struct student firstStudent;
    
    // fill in the fields of my firstStudent
    // only use -> for pointers
    firstStudent.zID = 5151515;
    firstStudent.mark = 60.2;
    // this doesn't work
    // firstStudent.name = "Frankie";
    // instead we must use strcpy
    strcpy(firstStudent.name, "Frankie");
    
    // create chicken
    // TODO:
    struct student *second = createStudent("Chicken", 5252525, 71);

    printStudent(&firstStudent);
    printStudent(second);
    
    
    // lets make a class
    // a class is just a linked list of students
    struct student *w11a = &firstStudent;
    firstStudent.next = second;
    
    
    // traverse (go through the elements of) a linked list
    printf("The students in w11a are: ");
    
    // make a copy of the "head" of the list
    struct student *curr = w11a;
    while (curr != NULL) {
        printStudent(curr);
        curr = curr->next;
    }
    
    
    free(second);
    
    // no longer access second





    return 0;
}

// creates a student given inputs and returns address to it
struct student *createStudent(char *name, int zID, double mark) {
    // make a new student struct
    struct student *new = malloc(sizeof(struct student));
    
    // error handling - ensuring new was allocated
    if (new == NULL) {
        printf("Error!! Ran out of memory. Bye Bye\n");
        // kill the program
        exit(1);
    }
    
    // populate the struct fields
    // *(new).zID = zID;
    new->zID = zID;
    new->mark = mark;
    strcpy(new->name, name);
    new->next = NULL;
    
    // return the address of the new struct
    return new;
}


void printStudent(struct student *stu) {
    printf("The current student is %s, has the zID %d and the mark %lf\n", 
                                            stu->name, stu->zID, stu->mark);
}






