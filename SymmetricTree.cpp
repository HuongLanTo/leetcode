#include <iostream>

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
    bool isSymmetric(TreeNode *root) {
        if (root == NULL) {
        	return true;
        }
        return isSymmetric(root->left, root->right);
    }

    bool isSymmetric(TreeNode *_left, TreeNode *_right) {
    	if (_left == NULL && _right == NULL) {
    		return true;
    	} else if (_left == NULL || _right == NULL) {
    		return false;
    	}
    	return ((_left->val == _right->val) && isSymmetric(_left->right, _right->left)
    						&& isSymmetric(_left->left, _right->right));
    }
};

int main() {
	TreeNode *root;
	root = NULL;
	std::cout << "The binary tree:" << std::endl;
	treeInput(root);
	Solution s;
	bool output = s.isSymmetric(root);
	if (output == true) {
		std::cout << "This binary tree is symmetric." << std::endl;
	} else {
		std::cout << "This binary tree is not symmetric." << std::endl;
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
