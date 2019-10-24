#include <vector>
#include "BTreeNode.h"


std::vector<int> traverse(BTreeNode* root) {
	//base case
	if (root->children_.empty()){
		return root->elements_;
	}
	//recursive process
	std::vector<int> v;
	std::vector<int> temp_v;
	unsigned i;
	for (i = 0; i <= root->elements_.size(); ++i){
		temp_v = traverse(root->children_[i]);
		v.insert(v.end(), temp_v.begin(), temp_v.end());
		if (i < root->elements_.size())
		v.push_back(root->elements_[i]);
	}
	//return the vector
	return v;
}








//最后尝试新方法，insert