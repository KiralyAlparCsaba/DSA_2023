//
// Created by Wufli on 2023. 03. 14..
//

#include "../Headers/functions.h"


void createStack(int capacity, Stack *stack) {
    stack->capacity = capacity;
    stack->top = -1;
    stack->elements = (int*)calloc(stack->capacity, sizeof(int));
    if(!(stack->elements)){
       exit (MEMORY_ALLOCATION_ERROR_CODE);
    }
}

void destroyStack(Stack* stack) {
    stack->capacity = 0;
    stack->top = -1;
    free(stack->elements);
    stack = NULL;
}

bool isEmpty(Stack stack) {
    return stack.top == -1;
}

bool isFull(Stack stack) {
    return stack.top == stack.capacity-1;
}

void push(Stack *stack, int item) {
    if(isFull(*stack)) {
        printf("FULL_MESSAGE");
        return;
    }
    stack->elements[++stack->top] = item;
}

int pop(Stack *stack) {
    if (isEmpty(*stack)) {
        printf("EMPTY_MESSAGE");
        return INT_MIN;
    }
    int save = stack->elements[stack->top];
    stack->elements[stack->top--] = 0;
    return save;
}

int peek(Stack stack) {
    if (isEmpty(stack)) {
        printf("EMPTY_MESSAGE");
        return INT_MIN;
    }
    return stack.elements[stack.top];
}

int size(Stack stack) {
    return stack.top+1;
}

