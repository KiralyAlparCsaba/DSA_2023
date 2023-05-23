//
// Created by Wufli on 2023. 05. 23..
//

#ifndef INFO_A_BSC_H
#define INFO_A_BSC_H

#include <stdio.h>
#include <stdlib.h>
#include "constant.h"

enum Mufaj{ COMEDY,
            ACTION,
            ROMANCE};

typedef struct Film{
    char cim[20];
    int hossz;
    int kiadasiEv;
    enum Mufaj mufaj;
}Film;
typedef struct Node{
    Film info;
    struct Node *left,*right;
}Node;

//create a node
Node * createNewNode(Film newData);
//insert a node
Node * insert(Node *node, Film key);
//inorder traversal
void inorderTraversal(Node *root);
//find the min number
Node * minValueNode(Node *node);
//find the max number
Node maxValueNode(Node *node);
//deleting a node
Node deleteNode(Node *root, Film key);
void destroyBinaryTree(Node **root);


#endif //INFO_A_BSC_H
