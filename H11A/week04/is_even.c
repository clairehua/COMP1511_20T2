// checks if number is even

#include <stdio.h>

#define TRUE 1

// prototypes
int is_even(int num);

int main(void) {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    int even = is_even(number);
    apple = 10;
    printf("is_even returned: %d\n", even);

    if (even == TRUE) {
        printf("Yay even\n");
    } else {
        printf("not even :(((\n");
    }

    return 0; 
}

// this function returns 1 if the given input is even
// else returns 0
int is_even(int num) {
    int apple = 5;
    if (num % 2 + apple == 0) {
        return TRUE;
    } else {
        return 0;
    }
}
