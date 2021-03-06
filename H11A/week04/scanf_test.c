#include <stdio.h>

#define SIZE 1000

void array_print(int array[], int size);

int main(void) {
    //int number;
    int inputs[SIZE];

    int index_so_far = 0;
    while (scanf("%d", &inputs[index_so_far]) == 1) {
        //printf("you entered: %d\n", number);
        index_so_far++;
    }
    
    array_print(inputs, index_so_far);
    
    printf("bye bye\n");
    
    return 0;
}

// no return value - void
// prints given array like this: [1, 2, 3]
void array_print(int array[], int size) {
    int i = 0;
    printf("[");
    while (i < size) {
        printf("%d", array[i]);
        
        // print the commas (anything but last one)
        if (i != size - 1) {
            printf(", ");
        }
        i++;
    }
    printf("]\n");
}



