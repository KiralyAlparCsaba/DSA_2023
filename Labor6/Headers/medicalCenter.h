//
// Created by Wufli on 2023. 03. 21..
//

#ifndef LABOR6_MEDICALCENTER_H
#define LABOR6_MEDICALCENTER_H

#include <functions.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct MedicalCenter{
    int capacity;
    int front;
    int rear;
    Patient *patient;
}MedicalCenter;

void createMedicalCenter(int capacity,MedicalCenter *queue);
bool isFull(MedicalCenter queue);
bool isEmpty(MedicalCenter queue);
void enqueue(MedicalCenter *queue, Patient newPatient);
Patient dequeue(MedicalCenter *queue);
void display(MedicalCenter medicalCenter);
void destroyMedicalCenter(MedicalCenter *medicalCenter);

#endif //LABOR6_MEDICALCENTER_H
