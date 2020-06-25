#include <stdio.h>

int main(void) {
    int number;

    while (scanf("%d", &number) == 1) {
        printf("you entered: %d\n", number);
    }
    
    printf("bye bye\n");
    
    return 0;
}
