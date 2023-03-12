// struct.cpp 

#include "student_struct.h"

void student_init(students *const ps, const char name[]){
    ps->matr_no = rand();
    strncpy(ps->name, name, strlen(name) + 1);
    for(unsigned int i = 0; i <= NUM_EXAMS; i++){
        ps->grades[i] = 0.0f;
    } 
    ps->num_of_grades = 0;
}

/*int matr_no;
    char name[MAX];
    float grades[MAX_grd];*/

void student_print(students* pstudent){
    printf("Information:\nMatr.Number: %d\n", pstudent->matr_no);
    printf("Name: %s\n", pstudent->name);
    for (pstudent->grades;;pstudent++) {
        printf("%.2f ", pstudent->grades);
    }
}

void student_add_grade(students *const ps, float grade){    
    if (ps->num_of_grades < NUM_EXAMS)
    {
        ps->grades[ps->num_of_grades] = grade;
        ++(ps->num_of_grades);
    }
    else
    {
        printf("!!! Can not add more grades to student %s. Maximum number of grades is %i\n", ps->name, NUM_EXAMS);
    }
}

