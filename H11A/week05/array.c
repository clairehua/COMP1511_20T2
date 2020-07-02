// working with 2D arrays
#define SIZE 5

#include <stdio.h>

// prototypes
void print_array(int map[SIZE][SIZE]);

void scalar_multiply(int rows, 
                     int columns, 
                     int matrix[rows][columns], 
                     int scalar);

int main(void) {
    int my_array[SIZE][SIZE] = {1, 1, 1, 1, 1,
                               1, 1, 1, 1, 1,
                               1, 1, 1, 1, 1,
                               1, 1, 1, 1, 1,
                               1, 1, 1, 1, 1};

    // print initial array
    print_array(my_array);
    // call scalar multiply
    scalar_multiply(SIZE, SIZE, my_array, 7);
    // print final array
    printf("new array is:\n");
    print_array(my_array);
    
    
    return 0;
}

// takes in a 2d array of ints and multiplies every value in the array 
// by a given int
void scalar_multiply(int rows, int columns, int matrix[rows][columns],  int scalar) {
    int i = 0;
    int j = 0;
    while (i < rows) {
        // IMPORTANT: reset j to starting column
        j = 0;
        while (j < columns) {
            matrix[i][j] = matrix[i][j] * scalar;
            j++;
        }
        i++;
    }

}


// Adapted from printMap function from Freefall.c assignment
void print_array(int map[SIZE][SIZE]) {
    
    // Print values from the array.
    int i = 0;
    while (i < SIZE) {
        int j = 0;
        while (j < SIZE) {
            printf("%d ", map[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }    

}
