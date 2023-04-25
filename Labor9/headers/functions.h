//
// Created by Wufli on 2023. 04. 25..
//

#ifndef LABOR9_FUNCTIONS_H
#define LABOR9_FUNCTIONS_H

#include<stdio.h>
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

void sortLinkedList(Node** head_ref);

void orderedList(Node** head_ref, int new_data);

void printList(Node* node);



#endif //LABOR9_FUNCTIONS_H
