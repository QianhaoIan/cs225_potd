#include "TreeNode.h"

bool isHeightBalanced(TreeNode* root) {
  int right_h, left_h;
  right_h = countHeight(root->right_, 0);
  left_h = countHeight(root->left_, 0);
  if (left_h - right_h < 2 && left_h - right_h > -2) return true;
  return false;
}

void deleteTree(TreeNode* root)
{
  if (root == NULL) return;
  deleteTree(root->left_);
  deleteTree(root->right_);
  delete root;
  root = NULL;
}



int countHeight(TreeNode* node, int height){
  if (node == NULL) return height;
  height += 1;
  if (countHeight(node->left_, height) > countHeight(node->right_, height)) height = countHeight(node->left_, height);
  else height = countHeight(node->right_, height);

  return height;

}


