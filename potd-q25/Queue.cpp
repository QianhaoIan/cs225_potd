#include "Queue.h"
#include <iostream>
using namespace std;

// Queue::Queue(){}


Queue::~Queue() {
	Node* temp = head_;
	while(head_ != NULL){
		temp = head_;
		head_ = head_->next;
		delete temp;
	}
}

// `int size()` - returns the number of elements in the stack (0 if empty)
int Queue::size() const {
	int count = 0;
	Node* cur_node = head_;
	while(cur_node != NULL){
		cur_node = cur_node->next;
		count++;
	}
  return count;
}

// `bool isEmpty()` - returns if the list has no elements, else false
bool Queue::isEmpty() const {
	if (head_ == NULL) return true;
	else return false;
}

// `void enqueue(int val)` - enqueue an item to the queue in O(1) time
void Queue::enqueue(int value) {
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

// `int dequeue()` - removes an item off the queue and returns the value in O(1) time
int Queue::dequeue() {
	// if (head_ == NULL) return -1;
	// if (head_ == tail_) tail_ = NULL;
	// int value = head_->elem;
	// Node* temp = head_;
	// if (head_->next != NULL) head_->next->prev = NULL;
	// head_ = head_->next;
	// delete temp;
 //  return value;

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


	value = head_->elem;
	head_ = head_->next;
	delete head_->prev;
	head_->prev = NULL;
	
	// delete temp;
	return value;

}




