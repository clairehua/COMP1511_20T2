// print numbers between range divisible by divisor
// W11A 17/6/20


#include <stdio.h>


int main(void) {
    int start, finish, divisor;
    
    printf("Enter start: ");
    scanf("%d", &start);    

    printf("Enter finish: ");
    scanf("%d", &finish);
    
    printf("Enter divisor: ");
    scanf("%d", &divisor);
        
    while (start <= finish) {
        // print only those divisible by divisor
        if (start % divisor == 0) {
            printf("%d\n", start); 
        }  
        start++;
    }   

    return 0;
}
