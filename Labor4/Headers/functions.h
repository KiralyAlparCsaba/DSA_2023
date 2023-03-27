//
// Created by Wufli on 2023. 03. 07..
//

#ifndef LABOR4_FUNCTIONS_H
#define LABOR4_FUNCTIONS_H

#include <constant.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int capacity;
    int size;
    int *elements;
}IntArray;

bool isFull(IntArray array);
bool isEmpty(IntArray array);

void createIntArray(int capacity, IntArray* pArray);
void printArray(IntArray array);
int getItemAt(IntArray array, int position);
void insertFirst(IntArray* pArray, int item);
void insertLast(IntArray* pArray, int item);
void insertAt(IntArray* pArray, int position, int item);


#endif //LABOR4_FUNCTIONS_H


