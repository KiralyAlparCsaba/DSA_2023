//
// Created by Wufli on 2023. 04. 04..
//

#include <stdio.h>
#include "../headers/functions.h"

bool isEmpty(Node *head) {
    return head == NULL;
}

Node *newNode(int new_data) {
    Node * new_node = (Node*) malloc(sizeof (Node));
    if(!new_node){
        exit(MEMORY_ALLOCATION_ERROR_CODE);
    }
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;

}

void insertAtBeginning(Node** head_ref, int new_data){
    Node * new_node = newNode(new_data);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
void insertAfter(Node* prev_node, int new_data){
    if(prev_node = NULL){
        printf("NULL_POINTER_EXCEPTION_ERROR_MESSAGE");
        return;
    }
    Node * new_node = newNode(new_data);
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void insertAtEnd(Node** head_ref, int new_data) {
    Node* new_node = newNode(new_data);
    Node* last = *head_ref;
    if (isEmpty(*head_ref)) {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL) last = last->next;
    last->next = new_node;
}

void deleteFromBeginning(Node **head_ref) {
    if(isEmpty(*head_ref)) {
        printf("NULL_POINTER_EXCEPTION_ERROR_MESSAGE");
        return;
    }
    Node *temp = *head_ref;
    *head_ref = (*head_ref)->next;
    free(temp);
}

void deleteFromEnd(Node **head_ref){
   if( isEmpty(*head_ref)){
       printf("NULL_POINTER_EXCEPTION_ERROR_MESSAGE");
       return;

    }
    Node * last = *head_ref, *prev;
   while(last->next != NULL){
       prev = last;
       last = last->next;
   }
   prev->next = NULL;
   free(last);

}
void deleteNode(Node** head_ref, int key) {
    Node *temp = *head_ref, *prev;
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) return;
    prev->next = temp->next;
    free(temp);
}
bool searchNode(Node* head_ref, int key) {
    Node *current = head_ref;
    while (current != NULL) {
        if (current->data == key)
            return
                    true;
        current = current->next;
    }
    return false;
}
void printList(Node* node) {
    while (node != NULL) {
        printf("%4d ", node->data);
        node = node->next;
    }
}
