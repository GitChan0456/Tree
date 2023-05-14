#include <stdio.h>

#include "tree.h"

Node* findNode(Node *n, int value);

int main()
{
	Node* root;
	Node* find = (Node*)malloc(sizeof(Node));

	root = makeTree();
	printTree(root);

	find = findNode(root, 200);

	if (find != NULL)
		printf("\n\n [Find : %d]", find->value);
	else
		printf("찾는 값이 없습니다.\n");

	return 0;
}
//특정 값을 찾는 노드의 포인터 반환하는 함수
Node* findNode(Node* root, int value)
{
	if (root == NULL) return NULL;
	if (root->value == value)
		return root;

	Node* N = findNode(root->left, value);
	if (N != NULL)
		return N;
	else
	{
		N = findNode(root->right, value);
		return N;
	}
}

