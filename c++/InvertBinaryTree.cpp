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
   int item;      
   TreeNode *left;   
   TreeNode *right;   
   TreeNode(int x) {
      item = x;
      left = NULL;
      right = NULL;
   }
}; 

void treeInsert(TreeNode *&root, int newItem);
void treeInput(TreeNode *&root);
void preorderPrint(TreeNode *root);

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        TreeNode* temp;
        if (root == NULL) {
        	return root;
        }
        temp = root->left;
        root->left = invertTree(root->right);
        root->right = invertTree(temp);
        return root;
    }
};

int main() {
   	TreeNode *root;  
   	root = NULL;    
   	treeInput(root);
   	Solution s;
   	root = s.invertTree(root);
   	preorderPrint(root);
   	return 0;
} 

void treeInsert(TreeNode *&root, int newItem) {
	if (root == NULL) {
		root = new TreeNode(newItem);
		return;
	} else if (newItem < root->item) {
		treeInsert(root->left, newItem);
	} else {
		treeInsert(root->right, newItem);
	}
};

void treeInput(TreeNode *&root) {
	int N, val;
	std::cout << "Please enter the number of nodes: ";
	std::cin >> N;
	for (int i = 1; i <= N; i++) {
		std::cout << "Node " << i << ": ";
		std::cin >> val;
		treeInsert(root, val);
	}
};

void preorderPrint(TreeNode *root) {
	if (root != NULL) {
		std::cout << root->item << " ";
		preorderPrint(root->left);
		preorderPrint(root->right);
	}
};

