//
// Created by Wufli on 2023. 05. 09..
//

#ifndef LABOR10_PERSON_BSC_H
#define LABOR10_PERSON_BSC_H

#include <stdlib.h>
#include <stdio.h>
#include <constant.h>
#include <stdbool.h>
#include <string.h>

typedef struct Person
{
    char nume[34];
    double parc_atlag, teszt_atlag, laborjegy;
    int gender;
}Person;

typedef struct Node{
    Person info;
    struct Node left ,right;
}Node;

//create a new node
Node createNewNode(Person newData);
Nodeinsert(Node node, Person key);
//inorder traversal
void inorderTraversal(Noderoot);




#endif //LABOR10_PERSON_BSC_H
