//
// Created by Wufli on 2023. 04. 04..
//

#ifndef LABOR8_FUNCTIONS_H
#define LABOR8_FUNCTIONS_H


#include <stdbool.h>
#include <stdlib.h>
#include <constant.h>



typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* newNode(int new_data);

bool isEmpty(Node *head);

void insertAtBeginning(Node** head_ref, int new_data);

void insertAfter(Node* prev_ref, int new_data);

void insertAtEnd(Node** head_ref, int new_data);

void deleteFromBeginning(Node** head_ref);

void deleteFromEnd(Node** head_ref);

void deleteNode(Node** head_ref, int key);

bool searchNode(Node* head_ref, int key);

void sortLinkedList(Node** head_ref);

void printList(Node* node);


#endif //LABOR8_FUNCTIONS_H
