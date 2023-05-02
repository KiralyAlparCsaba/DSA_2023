//
// Created by Wufli on 2023. 05. 02..
//

#ifndef LABOR10_BINARY_SEARCH_TREE_H
#define LABOR10_BINARY_SEARCH_TREE_H


#include <stdio.h>
#include <stdlib.h>
#include "constant.h"
typedef struct Node_B{
    int info;
    struct Node_B *left, *right;
}Node_B;
//create a Node_B
Node_B * createNewNode_B(int newData);
//insert a Node_B
Node_B * insert(Node_B *Node_B, int key);
//inorder traversal
void inorderTraversal(Node_B *root);
//find the min number
Node_B * minValueNode_B(Node_B *Node_B);



#endif //LABOR10_BINARY_SEARCH_TREE_H
