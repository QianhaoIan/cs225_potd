#include "TreeNode.h"
#include <queue>
#include <algorithm>
using namespace std;

TreeNode* findLastUnbalanced(TreeNode* root) {
	// your code here
	// TreeNode* temp;
	// if (root == NULL) return NULL;
	// if (abs(calculateHeight(node->left_) - calculateHeight(node->right_)) > 1){
	// 	temp = root;
	// }
	// if (findLastUnbalanced(node->left_) != NULL) temp = findLastUnbalanced(node->left_);
	// 	 && findLastUnbalanced(node->right_) != NULL;	

	// return temp;

	queue<TreeNode*> que;
	que.push(root);
	TreeNode* temp;
	TreeNode* goal = NULL;
	while (!que.empty()){
		temp = que.front();
		que.pop();
		if (temp->left_  != NULL) que.push(temp->left_);
		if (temp->right_ != NULL) que.push(temp->right_);
		if (abs(calculateHeight(temp->left_) - calculateHeight(temp->right_)) > 1) goal = temp;
	}
	return goal;
}


void deleteTree(TreeNode* root)
{
	if (root == NULL) return;
	deleteTree(root->left_);
	deleteTree(root->right_);
	delete root;
	root = NULL;
}



int calculateHeight(TreeNode* node){
	if (node == NULL)
		return -1;
	return 1 + max(calculateHeight(node->left_), calculateHeight(node->right_));

}