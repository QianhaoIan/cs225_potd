#include "TreeNode.h"

#include <cstddef>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

TreeNode::TreeNode() : left_(NULL), right_(NULL) { }

int TreeNode::getHeight() {
	int max_height = 0;
	int left = 0;
	int right = 0;
	if (this->left_ == NULL && this->right_ == NULL) return 0;
	if (this->left_ !=  NULL) left = left_->getHeight();
	if (this->right_ !=  NULL) right = right_->getHeight();
	max_height = max(left, right);
	max_height++;
  return max_height;
}
