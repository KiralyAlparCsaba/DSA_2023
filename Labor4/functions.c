//
// Created by Wufli on 2023. 03. 07..
//

#include "functions.h"


bool isFull(IntArray array) {
    return array.size == array.capacity;
}
bool isEmpty(IntArray array) {
    return array.size == 0;
}


void createIntArray(int capacity, IntArray *pArray) {
    pArray->capacity = capacity;
    pArray->size = 0;
    pArray->elements =(int*) calloc(capacity,sizeof(int));
    if (!pArray->elements) {
        printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
        exit(MEMORY_ALLOCATION_ERROR_CODE);
    }
}

void printArray(IntArray array) {
    if (isEmpty(array)) {
        printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
        return;
    }
    printf("The elements of the array: ");
    for (int i = 0; i < array.size; ++i) {
        printf("%i ", array.elements[i]);
    }
    printf("\n");
}

int getItemAt(IntArray array, int position) {
    if(position>array.size){
        return -5;
    }
    else
        printf("%i",array.elements[position]);

}

void insertLast(IntArray *pArray, int item) {
    if((pArray->size)+1>pArray->capacity)
        exit(-6);
    else
        pArray->elements[(pArray->size)+1]=item;
}

