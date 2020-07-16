#include <stdio.h>

#define SIZE 1000

int main(void) {
    //int number;
    int inputs[SIZE];

    int index_so_far = 0;
    while (scanf("%d", &inputs[index_so_far]) == 1) {
        //printf("you entered: %d\n", number);
        index_so_far++;
    }
    
    printf("bye bye\n");
    
    return 0;
}
