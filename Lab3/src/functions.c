//
// Created by Wufli on 2023. 02. 28..
//

#include "../Headers/functions.h"

void readStudentDetails(Student *pStudent) {
    scanf("%[^\n]\n",pStudent->name);
    scanf("%s",pStudent->birthPlace);
    scanf("%s",pStudent->neptunCode);

    scanf("%i%i%i",&pStudent->Date_t.year,&pStudent->Date_t.month,&pStudent->Date_t.day);
    scanf("%i",&pStudent-> Gender);
    scanf("%f", &pStudent->examResult);

}

void printStudent(Student student) {
        printf("%s\n", student.name);
        printf("%s\n", student.birthPlace);
        printf("%s\n", student.neptunCode);
        printf("%i ",student.Date_t.day);
        printf("%i ",student.Date_t.month);
        printf("%i\n",student.Date_t.year);
        printf("%s\n", getGender(student.Gender));
        printf("%.2f\n",student.examResult);
}

char *getGender(enum Gender gender)
    {
        switch(gender){
            case 0: {
                return "MALE";
            }
            case 1: {
                return "FEMALE";
            }
            default:
                return "NONEXISTENT GENDER";
        }

    }

