#include <stdio.h>

void sum_nums(int a, int b, int *sum) {
    // int result = a + b;
    // *sum = result

    *sum = a + b;
}



int main(void) {
    int one = 4;
    int two = 7;
    int sum = 7;
    
    printf("sum was: %d\n", sum);
    sum_nums(one, two, &sum);
    printf("sum is now: %d\n", sum);
    return 0;
}
