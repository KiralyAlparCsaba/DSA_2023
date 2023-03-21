//
// Created by Wufli on 2023. 03. 21..
//

#ifndef LABOR6_FUNCTIONS_H
#define LABOR6_FUNCTIONS_H


typedef struct Patient{

    char name[40];
    char  CNP[14];
    struct date{
        int day;
        int month;
        int year;
    }date;

    enum Sickness{
        INFLUENZA,
        DIABETES,
        CANCER,
        HYPERTENSION,
        ASTHMA,
        HEPATITIS,
        DEPRESSION,
        MIGRAINES,
        ANEMIA,
        OBESITY,
        ALLERGIES,
    }sickness;




}Patient;

void readPatientDetails (Patient *patient);
char *getSickness(enum Sickness sickness);
void printPatient(Patient patient );



#endif //LABOR6_FUNCTIONS_H
