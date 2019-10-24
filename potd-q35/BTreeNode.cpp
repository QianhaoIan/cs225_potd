#include <vector>
#include "BTreeNode.h"
#include <iostream>
using namespace std;


BTreeNode* find(BTreeNode* root, int key) {
	// Your Code Here
	unsigned i;
	for(i = 0; i < root->elements_.size() && key > root->elements_[i]; ++i){
	}


	if (i < root->elements_.size() && key == root->elements_[i]) {
		return root;
	}

	if (root->children_.empty()) {
		return NULL;
	}
	else {
		return find(root->children_[i], key);
	}


	return NULL;
}
