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
            // Check whether column number is greater than box size minus row number to print triangle
            if (column > number - row) {
              printf("*");
            } else {
              printf("-");
            }
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }

    return 0;
}
