#include "TreeNode.h"
#include <iostream>

TreeNode * deleteNode(TreeNode* root, int key) {
	// your code here

	
	//base case
	if (root == NULL) return root;
	if (key < root->val_){
		root->left_ = deleteNode(root->left_, key);
	}
	else if (key > root->val_) {
		root->right_ = deleteNode(root->right_, key);
	}
	else { 
			//found the goal
			//case1
			if (root->left_ == NULL && root->right_ == NULL){
				delete root;
				return NULL;
			}
			//case2
			else if (root->left_ == NULL) {
				TreeNode* next_node = root->right_;
				delete root;
				return next_node;
			}
			//case3
			else if (root->right_ == NULL) {
				TreeNode* next_node = root->left_;
				delete root;
				return next_node;
			}
			//case4
			else {
				TreeNode* temp;
				temp = root->right_;
				while(true){
					if (temp->left_ == NULL) break;
					temp = temp->left_;
				}
				root->val_ = temp->val_;
				root->right_ = deleteNode(root->right_, temp->val_);
				// delete temp;
			}
	}
	return root;
}

void inorderPrint(TreeNode* node)
{
		if (!node)  return;
		inorderPrint(node->left_);
		std::cout << node->val_ << " ";
		inorderPrint(node->right_);
}

void deleteTree(TreeNode* root)
{
	if (root == NULL) return;
	deleteTree(root->left_);
	deleteTree(root->right_);
	delete root;
	root = NULL;
}
