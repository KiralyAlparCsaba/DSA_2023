#include <stdio.h>
#include "binary_tree.h"
#include "binary_search_tree.h"

int main() {





    Node *node1 = NULL;
    node1 = createNewNode(112);
    insertLeft(node1,111);
    insertRight(node1,113);
    preorderTraversal(node1);
    inorderTraversal(node1);
    postorderTraversal(node1);
    printf("\n");
    Node_B *node2;
    node2 = createNewNode_B(333);
    insert(node2,444);
    insert(node2,222);
    inorderTraversal(node2);
    minValueNode_B(node2);
}
