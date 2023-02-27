#include <stdio.h>
#define MAX 5

int main()
{   
    // Arrays with all Grades
    int grades[MAX] = { 1, 2, 3, 4, 5 };
    float average = 0;
    for (int i = 0; i <= MAX; i++) {
        if (grades[i] < 7 && grades[i] > 0) {
            average += (float)grades[i]; 
        }
    }

    // Printing the values
    printf("Values: ");
    for (int i = 0; i < MAX - 1; i++) {
        printf("%d, ", grades[i]);
    }
    printf("%d \n", grades[MAX-1]);

    // Printing the value
    printf("Average: %.2f", average/(float)MAX);

}
