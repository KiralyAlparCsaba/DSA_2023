//
// Created by Wufli on 2023. 05. 09..
//

#include "person_bsc.h"
#include "constant.h"


Person *createNewPerson(Person newData) {
    Person *newPerson = malloc(sizeof(Person));
    if (!newPerson) {
        printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
        exit(MEMORY_ALLOCATION_ERROR_CODE);
    }
    newPerson->left = NULL;
    newPerson->right = NULL;
    newPerson->info.laborjegy = newPerson->info.parc_atlag*0.6 + newPerson->info.teszt_atlag*0.4;
    return newPerson;
}

Person *insertLeft(Person *root, Person newData) {
    root->left= createNewPerson(newData);
    return (Person *) root->left;
}

Person *insertRight(Person *root, Person newData) {
    root->right= createNewPerson(newData);
    return root->right;
}

void preorderTraversal(Person *root) {
    if(root==NULL) return;
    printf("%i ",root->info);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void inorderTraversal(Person *root) {
    if(root==NULL) return;
    inorderTraversal(root->left);
    printf("%s %i ",root->info.name, root->info.laborjegy);
    inorderTraversal(root->right);
}

void postorderTraversal(Person *root) {
    if(root==NULL) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%i ",root->info);
}
