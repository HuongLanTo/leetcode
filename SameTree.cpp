#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p == NULL || q == NULL) {
        	return (p == q);
        }
        return (p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right));
    }
};

int main() {
	TreeNode *root1;
	TreeNode *root2;
	root1 = NULL;
	root2 = NULL;
	std::cout << "The binary tree 1:" << std::endl;
	std::cout << "\t";
	treeInput(root1);
	std::cout << "The binary tree 2:" << std::endl;
	std::cout << "\t";
	treeInput(root2);
	Solution s;
	bool result = s.isSameTree(root1, root2);
	if (result == true) {
		std::cout << "They are equal.";
	} else {
		std::cout << "They are not equal.";
	}
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