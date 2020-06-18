#include <stdio.h>

int main(void) {
    int number;
    int row, column;

    // Obtain input
    printf("Enter size: ");
    scanf("%d", &number);

    row = 1;
    while (row <= number) {
        column = 1;
        while (column <= number) {
            // before the diagonal line
            if (column <= number - row) {
              // print the -
              printf("-");
            }
            else {
              // print *
              printf("*");
            }
            column = column + 1;
            
        }
        printf("\n");
        row = row + 1;
    }

    return 0;
} 

