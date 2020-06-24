#include <stdio.h>

#define MAX_SIZE 1000

// prototypes
void array_print(int array[], int size);

int main(void) {
    int input[MAX_SIZE];
    int numInputs = 0; 
    
    while (numInputs < MAX_SIZE && scanf("%d", &input[numInputs]) == 1) {     
        numInputs++;
    }
    // reach here when control d is pressed
    array_print(input, numInputs);

    printf("bye bye\n");
    return 0;
}

// function prints out given array like this:
// [1, 2, 3]
void array_print(int array[], int size) {
    int i = 0;
    
    printf("[");
    while (i < size) {
        printf("%d", array[i]);
        if (i != size - 1) {
            printf(", ");
        }
        i++;
    }
    printf("]\n");
}
