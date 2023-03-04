// A1 HW 1.5.cpp : A little programm to convert a decimal number into a binary number :)
//

#include <stdio.h>
#include "math.h"


int main()
{
    // Decimal to Binary Converter

    int dec_num = 0;
    unsigned long long binary = 0;
    printf("Enter a decimal number to convert into binary: ");
    scanf("%d", &dec_num);

    int factor = 1;


    while (dec_num > 0) {
        if(dec_num % 2) {
            binary += factor;
        }
        factor *= 10;
        dec_num /= 2;
    }

    printf("%llu", binary);

   
}
