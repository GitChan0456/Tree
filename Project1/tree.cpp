#include <stdio.h>
#include "tree.h"
Node* createNode(int value)	//������
{
    //1 sizeof(Node) malloc
    Node* pNode = (Node*)malloc(sizeof(Node));
    if (pNode == NULL) {
        return NULL;
    }

    //2 �ʱ�ȭ : n->value = val, left, right (NULL)
    pNode->value = value;
    pNode->left = NULL;
    pNode->right = NULL;

    //3 ���� Node��ü ���� ��ȯ
    return pNode;
}

Node* connectChild(Node* parent, Node* left, Node* right)
{
    if (parent == NULL)
        return NULL;

    parent->left = left;
    parent->right = right;
    return parent;
}

Node* makeTree()
{
    Node* pRoot = NULL;
    Node* tleft = NULL;
    Node* tright = NULL;

    pRoot = createNode(100);
    tleft = createNode(200);
    tright = createNode(300);

    connectChild(pRoot, tleft, tright);
    connectChild(tright, createNode(400), createNode(500));

    return pRoot;
}

void printTree(Node* root)
{
    if (root == NULL) return;

    printf("Node: %d  ", root->value);
    printTree(root->left);
    printTree(root->right);
}

