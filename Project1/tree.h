#pragma once
#include <stdlib.h>
typedef struct _Node {
	int value;
	struct _Node* left;
	struct _Node* right;
}Node;

Node* createNode(int value);
Node* connectChild(Node* parent, Node* left, Node* right);
Node* makeTree();
void printTree(Node* root);
Node* findNode(int value);