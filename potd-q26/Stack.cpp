#include "Stack.h"

// `int size()` - returns the number of elements in the stack (0 if empty)
int Stack::size() const {
	int count = 0;
	Node* cur_node = head_;
	while(cur_node != NULL){
		cur_node = cur_node->next;
		count++;
	}
	return count;
}

// `bool isEmpty()` - returns if the list has no elements, else false
bool Stack::isEmpty() const {
	if (head_ == NULL) return true;
	else return false;
}

// `void push(int val)` - pushes an item to the stack in O(1) time
void Stack::push(int value) {
	Node* new_node = new Node();
	if (head_ == NULL) {
		head_ = new_node;
		tail_ = new_node;
		new_node->prev = NULL;
		new_node->next = NULL;
		new_node->elem = value;
		return;
	}
	new_node->next = NULL;
	new_node->prev = tail_;
	new_node->elem = value;
	tail_->next = new_node;
	tail_ = new_node;

}

// `int pop()` - removes an item off the stack and returns the value in O(1) time
int Stack::pop() {
	int value = 0;
	Node* temp = head_;
	if (head_ == NULL) return -1;
	if (head_ == tail_){
		value = head_->elem;
		head_ = NULL;
		tail_ = NULL;
		delete temp;
		return value;
	}

	value = tail_->elem;
	tail_ = tail_->prev;
	delete tail_->next;
	tail_->next = NULL;
	
	return value;
}
