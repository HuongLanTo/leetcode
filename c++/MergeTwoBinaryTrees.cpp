#include <iostream>
#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) {
		val = x;
		left = NULL;
		right = NULL;
	}
};

void treeInsert(TreeNode *&root, int newVal);
void treeInput(TreeNode *&root);
void preorderPrint(TreeNode *root);

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if (t1 == NULL && t2 == NULL) {
        	return NULL;
        } else if (t1 != NULL && t2 == NULL) {
        	return t1;
        } else if (t2 != NULL && t1 == NULL) {
        	return t2;
        } else {
        	t1->val = t1->val + t2->val;
        	t1->left = mergeTrees(t1->left, t2->left);
        	t1->right = mergeTrees(t1->right, t2->right);
        }
        return t1;
    }
};

int main() {
	TreeNode *root1;
	TreeNode *root2; 
   	root1 = NULL;    
   	root2 = NULL;
   	std::cout << "Binary tree 1: " << std::endl;
   	treeInput(root1);
   	std::cout << "Binary tree 2 " << std::endl;
   	treeInput(root2);
   	Solution s;
   	root1 = s.mergeTrees(root1, root2);
   	preorderPrint(root1);
   	return 0;
}

void treeInsert(TreeNode *&root, int newVal) {
	if (root == NULL) {
		root = new TreeNode(newVal);
		return;
	} else if (newVal < root->val) {
		treeInsert(root->left, newVal);
	} else {
		treeInsert(root->right, newVal);
	}
};

void treeInput(TreeNode *&root) {
	int N, val;
	std::cout << "Please enter the number of nodes: ";
	std::cin >> N;
	for (int i = 1; i <= N; i++) {
		std::cout << "\t\tNode " << i << ": ";
		std::cin >> val;
		treeInsert(root, val);
	}
};

void preorderPrint(TreeNode *root) {
	if (root != NULL) {
		std::cout << root->val << " ";
		preorderPrint(root->left);
		preorderPrint(root->right);
	}
};

