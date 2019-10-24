#include "TreeNode.h"

#include <cstddef>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;

TreeNode::TreeNode() : left_(NULL), right_(NULL) { }

int TreeNode::getHeight() {
	int max_height = -1;
	int cur_height = -1;
	stack<TreeNode*> stack_node;
	vector<TreeNode*> close_list;
	TreeNode* cur_node = this;


	while(cur_node != NULL){
		stack_node.push(cur_node);
		cur_node = cur_node->left_;
		max_height++;
	}
	cur_height = max_height;


	// stack_node.push(cur_node);
	while(!stack_node.empty()){
		cur_node = stack_node.top();
		close_list.push_back(cur_node);

		int flag = 0;
		for (int i = 0; i < close_list.size(); ++i){
			if (close_list[i] == cur_node) flag = 1;
		}

		if (flag == 0){
			if (cur_node->right_ != NULL) {
				stack_node.push(cur_node->right_);
				cur_height++;
				cur_node = cur_node->right_;
				while(cur_node->left_ != NULL){
					stack_node.push(cur_node->left_);
					cur_node = cur_node->left_;
					cur_height++;
				}
			}
		}

		// if (cur_node->left_ != NULL) stack_node.push(cur_node->left_);
		
		if (cur_height > max_height) max_height = cur_height;
		stack_node.pop();	
		cur_height--;
	}


  return max_height;
}
