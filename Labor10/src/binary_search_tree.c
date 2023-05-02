//
// Created by Wufli on 2023. 05. 02..
//

#include "binary_search_tree.h"


Node_B *insert(Node_B *Node_B, int key) {
    if(Node_B==NULL)
        return createNewNode_B(key);

    if(key<Node_B->info)
        Node_B->left=insert(Node_B->left, key);
    else
        Node_B->right=insert(Node_B->right,key);
    return Node_B;
}

Node_B *minValueNode_B(Node_B *Node) {
    Node_B *current=Node;
    while(current!=NULL && current->left!=NULL)
        current=current->left;
    return current;
}

Node_B *maxValueNode_B(Node_B *Node) {
    Node_B *current=Node;
    while(current!=NULL && current->right!=NULL)
        current=current->right;
    return current;
}

Node_B *deleteNode_B(Node_B *root, int key) {
    if (root == NULL) return root;
    if (key < root->info)
        root->left = deleteNode_B(root->left, key);
    else if (key > root->info)
        root->right = deleteNode_B(root->right,
                                 key);
    else {
        if (root->left == NULL) {
            Node_B *temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            Node_B *temp = root->left;
            free(root);
            return (temp);
        }

        Node_B *temp =minValueNode_B(root->right);
        root->info = temp->info;

        root->right = deleteNode_B(root->right, temp->info);
    }
    return root;
}