#include<stdio.h>
#include<stdlib.h>

struct node {
	int key;
	struct node *left, *right;
};

struct node *newNode(int item) {
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}

void Print(struct node *root) {
	if (root != NULL) {
		Print(root->left);
		if (root->left != NULL || root->right != NULL)
			printf("%d \n", root->key);
		Print(root->right);
	}
}

struct node* insert(struct node* node, int key) {
	if (node == NULL) return newNode(key);
	
	if (key < node->key)
		node->left = insert(node->left, key);
	else if (key > node->key)
		node->right = insert(node->right, key);
		
	return node;
}

int main() {
	int i, n, input;
	struct node *root = NULL;
	
	scanf("%d", &n);
	scanf("%d", &input);
	root = insert(root, input);
	for(i = 1; i < n; i++){
		scanf("%d", &input);
		insert(root, input);
	}
	Print(root);
	
	return 0;
}
