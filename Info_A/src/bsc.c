//
// Created by Wufli on 2023. 05. 23..
//

#include "../headers/bsc.h"

Node *createNewNode(Film newData) {
    Node *newItem = (Node* ) malloc(sizeof(Node));
    if (!newItem) {
        printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
        exit(MEMORY_ALLOCATION_ERROR_CODE);
    }
    newItem->info = newData;
    newItem->left = NULL;
    newItem->right = NULL;
    return newItem;
}


Node *insert(Node *node, Film key) {
    if (node == NULL) {
        return createNewNode(key);
}
if (node->info.hossz < key.hossz) {
node->right = insert(node->right, key);
} else {
node->left = insert(node->left, key);
}
return node;
}

void inorderTraversal(Node *root) {
    if (root == NULL)return;
    inorderTraversal(root->left);
    printf("%s ", root->info.cim);
    inorderTraversal(root->right);
}

Node *minValueNode(Node *node) {
    Node *current = node;
    while (current != NULL && current->left != NULL) {
        current = current->left;
    }
    return current;
}

Node maxValueNode(Node *node) {
Node *current = node;
while (current != NULL && current->right != NULL) {
current = current->right;
}
return *current;
}

/*Node deleteNode(Node *root, Film key) {

    if (root->info.hossz < key.hossz) {
        root->right = deleteNode(root->right, key);
    } else if (root->info.hossz > key.hossz) {
        root->left = deleteNode(root->left, key);
    } else {
        //node to be deleted
        if (root->right == NULL && root->left == NULL) {
            free(root);
        } else if (root->right == NULL) {
            Node temp = root->left;
            free(root);
            return temp;
        } else if (root->left == NULL) {
            Node temp = root->right;
            free(root);
            return temp;
        }
    }
}
*/
