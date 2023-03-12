#ifndef STUDENT_STRUCT_H
#define STUDENT_STRUCT_H

#include <stdio.h>

#define NAME_LEN 20
#define NUM_EXAMS 4
#define nl printf("\n")

typedef struct {
    int matr_no;
    char name[NAME_LEN];
    float grades[NUM_EXAMS];
    unsigned int num_of_grades;
}students ;

#endif