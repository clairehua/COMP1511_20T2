#include <stdio.h>

// places sum of a and b into sum

// (int *)variable_name

int sum_nums(int a, int b, int *sum) {
    // * -> go inside where sum is pointing 
    // and change the value to a+b
    *sum = a + b;    
    return 2;
}

int *max(int *a, int *b) {
    // we have addresses, 
    // we want to check the integers
    if (*a < *b) {
        return b;
    } else {
        return a;
    }

}


int main(void) {
    int num1 = 2; 
    int num2 = 7;
    int res = 10;

    // & means get addess of 
    // so &res gives us 0xFF8420...
    // and (int *) stores an address
    int func_value = sum_nums(num1, num2, &res);
    
    printf("res was: %d and the function returns: %d\n", res, func_value);


    int *larger = max(&num1, &num2);
    printf("the address of num1 is %p and the address of num2 is %p\n", &num1, &num2);
    printf("the address of the larger value %p and the value is %d\n", larger, *larger);

    return 0;
}
