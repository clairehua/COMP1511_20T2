#include <stdio.h>

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


int main(void) {
    int square[15];
    
    int i = 0;
    while (i < 15) {
        square[i] = i * i;
        i++;
    }
    
    array_print(square, 15);

    return 0;
}
