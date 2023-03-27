#include <stdio.h>
#include "functions.h"
#include <string.h>
#include "medicalCenter.h"

int main() {

  int capacity;
    printf("The capacity of the medical center:");
    scanf("%i", &capacity);
    MedicalCenter medCenter;
    Patient patient1 = {"Lakatos Leonidas","1990708965432",{1999,9,8},MIGRAINES};
    createMedicalCenter(capacity, &medCenter);
    enqueue(&medCenter,patient1);

    display(medCenter);


}
