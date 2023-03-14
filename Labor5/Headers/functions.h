//
// Created by Wufli on 2023. 03. 14..
//

#ifndef LABOR5_FUNCTIONS_H
#define LABOR5_FUNCTIONS_H
#include <constant.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


typedef struct {
    int capacity;
    int top;
    int *elements;
}Stack;


void createStack(int capacity, Stack *stack);
void destroyStack(Stack* stack);
 bool isFull(Stack stack);
 bool isEmpty(Stack stack);
 void push(Stack* stack, int item);
 int pop(Stack* stack);
 int peek(Stack stack);
 int size(Stack stack);





#endif //LABOR5_FUNCTIONS_H
