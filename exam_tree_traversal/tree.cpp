#ifndef TREE_CPP
#define TREE_CPP

#include "tree.h"
#include <iostream>
using namespace std;

template <class T>
Tree<T>::Iterator::Iterator(Tree::Node *root) : curr_(root) {
	// TODO: your code here

	s.push(root);
	while(!s.empty()){
		Node* cur = s.top();
		q.push(cur);
		s.pop();
		if(cur->right_) s.push(cur->right_);
		if(cur->left_)  s.push(cur->left_);
	}
	q.pop();
	// // cout << __LINE__ << endl;
	// while (!q.empty()){
	// 	cout << q.front()->data_ << endl;
	// 	q.pop();
	// }
	cout << __LINE__ << endl;

}


template <class T>
typename Tree<T>::Iterator & Tree<T>::Iterator::operator++() {
	// TODO: your code here

	// if (q.empty()) {
	// 	curr_ = NULL;
	// 	return *this;
	// }

	// q.pop();
	// if (q.empty()) {
	// 	curr_ = NULL;
	// 	return *this;
	// }
	// else{
	// 	curr_ = q.front();
	// }
	cout << __LINE__ << endl;
	curr_ = q.front();
	q.pop();

	return *this;
}


template <class T>
T Tree<T>::Iterator::operator*() const {
	// TODO: your code here
	cout << __LINE__ << endl;
	if (curr_) 
		return curr_->data_;
	return T();
}







/*******************
 ** PROVIDED CODE **
 *******************/
template <class T>
bool Tree<T>::Iterator::operator!=(const Tree<T>::Iterator &other) {
	cout << __LINE__ << endl;
	return !(curr_ == other.curr_);
}

template <class T>
typename Tree<T>::Iterator Tree<T>::begin() {
	cout << __LINE__ << endl;
	// auto it = Iterator(root_);
	return Iterator(root_);
}

template <class T>
typename Tree<T>::Iterator Tree<T>::end() {
	cout << __LINE__ << endl;
	return Iterator(NULL);
}

#endif











// template <class T>
// Tree<T>::Iterator::Iterator(Tree::Node *root) : curr_(root) {
// 	// TODO: your code here
// 	s.push(root);
// }


// template <class T>
// typename Tree<T>::Iterator & Tree<T>::Iterator::operator++() {
// 	// TODO: your code here
// 	if (s.empty()) {
// 		// cout << __LINE__ << endl;	
// 		curr_ = NULL;
// 		return *this;
// 	}

// 	do {
// 		Node* temp;
// 		temp = s.top();
// 		s.pop();
		
// 		if (temp->right_) s.push(temp->right_);
// 		if (temp->left_)  s.push(temp->left_);
// 		visited.push_back(temp);

// 		if (!s.empty())
// 			curr_ = s.top();
// 		else
// 			curr_ = NULL;
// 	}while ( curr_ == NULL && curr_->data_ % 2 != 0);
	

// 	return *this;
// }


// template <class T>
// T Tree<T>::Iterator::operator*() const {
// 	// TODO: your code here
// 	if (curr_) return curr_->data_;
// 	return T();
// }


// template <class T>
// bool Tree<T>::Iterator::can_visit(Node* root){
// 	for (unsigned i=0; i<visited.size(); ++i){
// 		if (root->data_ == visited[i]->data_)
// 			return false;
// 	}
// 	return true;
// }