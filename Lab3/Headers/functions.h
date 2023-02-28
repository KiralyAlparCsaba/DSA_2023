//
// Created by Wufli on 2023. 02. 28..
//

#ifndef LAB3_FUNCTIONS_H
#define LAB3_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student_t{
    char name[50], neptunCode[8], birthPlace[25];
    enum Gender{
        MALE,
        FEMALE,
    }Gender;

    float examResult;
    struct Date_t{
        int year,month,day;

    }Date_t;
}Student;

void readStudentDetails(Student *pStudent);
void printStudent(Student student);
char *getGender(enum Gender gender);

#endif //LAB3_FUNCTIONS_H
