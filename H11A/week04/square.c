#include <stdio.h>

void fill_with_squares(int size, int array[]);
void array_print(int array[], int size);

int main(void) {
    int squares[15] = {0};

    
    array_print(squares, 15);
    
    fill_with_squares(15, squares);
    
    array_print(squares, 15);


    return 0;
}

// take array and fill elements with square of indices
void fill_with_squares(int size, int array[]) {

    int i = 0;
    
    while (i < size) {
        array[i] = i * i;
        i++;
    }
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

