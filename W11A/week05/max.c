#include <stdio.h>


int *max(int *a, int *b) {
    if (*a > *b) {
        return a;
    } else {
        return b;
    }
}


int main(void) {
    int one = 9;
    int two = -9;
    
    int *larger = max(&one, &two);
    printf("the largest number was %d\n", *larger);
    
    return 0;
}
