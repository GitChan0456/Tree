#include <stdio.h>

#include "tree.h"

int main()
{
	Node* root;
	Node* val;
	printf("main함수입니다.\n");

	root = makeTree();
	printTree(root);

	return 0;
}