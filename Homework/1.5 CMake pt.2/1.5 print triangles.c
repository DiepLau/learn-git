// A1 HW 1.5.cpp : A little programm to print some nice triangles :)
//

#include <stdio.h>

int main()
{   // Print triangles
    int height;
    printf("Enter height: ");
    scanf("%d", &height); 

    // Using for loops to print the triangles
    for (int k = 1; k <= height; k++) {
        for (int i = 1; i <= k; i++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // Triangle 2
    for (int k = 1; k <= height; k++) {
        for (int i = 0; i < height - k; i++) {
            printf(" ");
        }
        for (int i = 1; i <= (k * 2 - 1); i++) {
            printf("*");
        }
        printf("\n");

    }
}
