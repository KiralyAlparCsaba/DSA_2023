#include <stdio.h>
#include "functions.h"

int main() {
   int data1 = 2309 ,data2 = 16774;
   if(data1<data2) {
       int x = data1;
       data1 = data2;
       data2 = x;
   }
   Node *node1 = NULL;
   node1 = newNode(data1%10);
   data1=data1/10;
   while(data1>0){
       int next_num = data1%10;
       insertAtEnd(&node1,next_num);
       data1=data1/10;
   }
    printList(node1);

   Node *node2 = NULL;
   node2 = newNode(data2%10);
   data2 = data2/10;
    while(data2>0){
        int next_num = data2%10;
        insertAtEnd(&node2,next_num);
        data2=data2/10;
    }
    printList(node2);
    printf("\n");
    Node *sum = NULL;
    sum = newNode((node1->data + node2->data)%10);
    int next;
    while(node1 != NULL && node2 != NULL){
        if(node1->data + node2->data>9)
            next = 1;
        else
            next =0;
        deleteFromBeginning(&node1);
        deleteFromBeginning(&node2);
        if(node2 == NULL){
            insertAtEnd(&sum,(node1->data + next)%10);
        }
        else {

            insertAtEnd(&sum, (node1->data + node2->data + next)%10);
        }
    }

    printList(sum);

}
