// prints out given range
// author


#include <stdio.h>

int main(void) {
    int start;
    int finish;
    int divisor;
    
    printf("Enter start: ");
    scanf("%d", &start);
        
    printf("Enter finish: ");
    scanf("%d", &finish);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    while (start <= finish) {
        // checks if it is a multiple
        if (start % divisor == 0) {
            printf("%d\n", start);
        }
        start++;
    }


    return 0;
}


