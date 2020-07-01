// working with 2D arrays
// COMP1511 W11A
// 1/7/20

#define SIZE 5

#include <stdio.h>

// prototypes
void print_array(int map[SIZE][SIZE]);

void scalar_multiply(int rows, int columns, int matrix[rows][columns], 
                     int scalar);

int main(void) {
    int myArray[SIZE][SIZE] = {1, 1, 1, 1, 1,
                               1, 1, 1, 1, 1,
                               1, 1, 1, 1, 1,
                               1, 1, 1, 1, 1,
                               1, 1, 1, 1, 1};

    // print initial array
    print_array(myArray);
    // call scalar multiply
    scalar_multiply(SIZE, SIZE, myArray, 7);
    // print final array
    printf("Final: \n");
    print_array(myArray);





    int myArray2[SIZE][SIZE]; 
     
    // fill myArray2 to look like this:
    // 0, 1, 2, 3, 4,
    // 5, 6, 7, 8, 9,
    // 10,11,12,13,14
    // 15,16,17,18,19,
    // 20,21,22,23,24 
    
    int i = 0;
    while (i < SIZE) {
        int j = 0;
        while (j < SIZE) {
            // declare a count variable?
            // or create a formula
            myArray2[i][j] = SIZE * i + j;
            j++;
        }
        
        i++;
    }
    
    print_array(myArray2);
    scalar_multiply(SIZE, SIZE, myArray2, 2);
    // print final array
    printf("Final: \n");
    print_array(myArray2);

    return 0;
}

// takes in a 2d array of ints and multiplies every value in the array by a given int
void scalar_multiply(int rows, int columns, int matrix[rows][columns],  int scalar) {
    int i = 0;
    int j = 0;
    while (i < rows) {
        // IMPORTANT - reset second loop counter
        j = 0; 
        while (j < columns) {
            // reached element matrix[i][j]
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
