#include <stdio.h>

// function prototype
int is_even(int num);
int add(int num1, int num2);

int main(void) {
    int number;
    scanf("%d", &number);
      
    
    /*if (number % 2 == 0) {
        printf("this number was even\n");
    } else {
        printf("this number was odd\n");
    }*/
    
    // call the function and store its return value in 'result'
    int result = is_even(number);
    printf("the function returned: %d\n", result);
    
    if (result == 1) {
        printf("even\n");
    } else {
        printf("odd\n");
    }

    int res = add(2, 3);
    printf("the function returned: %d\n", res);

    // indicates errors?? if any
    // 0 -> no errors
    // any other number indicates error
    return 0;
}

// function return 1 if even, 0 if odd
int is_even(int num) {
    // check if even
    if (num % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

// this function adds two numbers
int add(int num1, int num2) {

    return num1 + num2;
}
