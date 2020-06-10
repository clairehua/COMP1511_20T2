// W11A, 10 June 2020
// prints area of given rectangle


// lets us print and scan
#include <stdio.h>

int main (void) {
    int length;
    int width;
    // int area;


    printf("Please enter rectangle length: ");
    scanf("%d", &length);

    printf("Please enter rectangle width: ");
    scanf("%d", &width);
    
    if (length < 0 || width < 0) {
        printf("ERROR: positive integers only!!\n");
        return 0;
    }


    // area = length * width;
    printf("Area = %d\n", length * width);
    

    return 0;
}

