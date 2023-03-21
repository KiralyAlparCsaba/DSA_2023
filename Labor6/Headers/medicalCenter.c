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

void enqueue(MedicalCenter *queue, int item) {
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

int dequeue(MedicalCenter *queue) {
    if(isEmpty(*queue)) {
        printf("IS_EMPTY");
        return INT_MIN;
    }
    int save = queue->patient[queue->front];
    if(queue->front == queue->rear)
    {
        queue->front = queue->rear = -1;
    }
    else {
        queue->front = (queue->front + 1) % queue->capacity;
    }
    return save;
}

