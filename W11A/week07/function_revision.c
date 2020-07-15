#include <stdio.h>

// function prototypes
// to let us know a function of this name exists
int add(int a, int b);

int main(void) {
    int c = 1;
    int d = 5;
    
    // call the add function
    int result = add(c, d);
    printf("the return value was %d\n", result);

    return 0;
} 


// actually write all of the functions

// this function returns the sum of two input numbers
int add(int a, int b) {
    int sum = a + b;
    return sum;
}

