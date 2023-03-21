//
// Created by Wufli on 2023. 03. 21..
//

#include "functions.h"
#include <stdio.h>



void readPatientDetails (Patient *patient){

    scanf("%[^\n]\n",patient->name);
    scanf("%[^\n]\n",patient->CNP);
    scanf("%i %i %i", &patient->date.year, &patient->date.month, &patient->date.day);
    scanf("%i", &patient->sickness);
}


char *getSickness(enum Sickness sickness)
{
    switch(sickness){
        case 0: {
            return "INFLUENZA";
        }
        case 1: {
            return "DIABETES";
        }
        case 2: {
            return "CANCER";
        }
        case 3: {
            return "HYPERTENSION";
        }
        case 4: {
            return "ASTHMA";
        }
        case 5: {
            return "HEPATITIS";
        }
        case 6: {
            return "DEPRESSION";
        }
        case 7: {
            return "MIGRAINES";
        }
        case 8: {
            return "ANEMIA";
        }
        case 9: {
            return "OBESITY";
        }
        case 10: {
            return "ALLERGIES";
        }
        default:
            return "NONEXISTENT SICKNESS";
    }
}

void printPatient(Patient patient ) {
    printf("%s\n", patient.name);
    printf("%s\n", patient.CNP);
    printf("%i ",patient.date.year);
    printf("%i ",patient.date.month);
    printf("%i\n",patient.date.day);
    printf("%s\n", getSickness(patient.sickness));
}