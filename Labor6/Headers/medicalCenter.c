//
// Created by Wufli on 2023. 03. 21..
//

#include <stdio.h>
#include "medicalCenter.h"




void createMedicalCenter(int capacity,MedicalCenter *queue){
    queue->capacity= capacity;
    queue->front=queue->rear = -1;
    queue->patient = (Patient *) calloc(queue->capacity, sizeof(Patient));
    if(!queue->patient){
        exit(-1);
    }
}

bool isFull(MedicalCenter queue) {
    return queue.front == 0 && queue.rear == queue.capacity-1 || queue.rear == queue.front-1;
}
bool isEmpty(MedicalCenter queue){
    return queue.front == -1;
}

void enqueue(MedicalCenter *queue, Patient item) {
    if(isFull(*queue)) {
        printf("IS FULL");
        return;
    }
    if(isEmpty(*queue)) {
        queue->front = 0;
    }
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->patient[queue->rear] = item;
}

Patient dequeue(MedicalCenter *queue) {
    Patient save = queue->patient[queue->front];
    if(queue->front == queue->rear)
    {
        queue->front = queue->rear = -1;
    }
    else {
        queue->front = (queue->front + 1) % queue->capacity;
    }
    return save;
}

void display(MedicalCenter medicalCenter) {
    if(isEmpty(medicalCenter)){
        printf("There are no patients in the medical center\n");
        return;
    }
    printf("The patiens are:\n");
    int i = medicalCenter.front;
    if(i != medicalCenter.rear){
        do{
            printPatient(medicalCenter.patient[i]);
            i = (i+1) % medicalCenter.capacity;
        } while (i != medicalCenter.rear);
    }
    printPatient(medicalCenter.patient[i]);
    printf("\n");
}
void destroyMedicalCenter(MedicalCenter *medicalCenter){

}

