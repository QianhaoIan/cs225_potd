#include "TreeNode.h"
// #include <cmath>
#include <algorithm>
using namespace std;





bool isHeightBalanced(TreeNode* root) {
  if (root == NULL) return true;
  if (abs(calculateHeight(root->left_) - calculateHeight(root->right_)) > 1){
    return false;
  }
  return isHeightBalanced(root->left_) && isHeightBalanced(root->right_);
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
