#include <stdio.h>

#include "tree.h"

int main()
{
	Node* root;
	Node* val;
	printf("main�Լ��Դϴ�.\n");

	root = makeTree();
	printTree(root);

	return 0;
}