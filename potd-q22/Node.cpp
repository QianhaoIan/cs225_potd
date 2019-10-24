#include "Node.h"
#include <iostream>
using namespace std;

Node *listIntersection(Node *first, Node *second) {
  // your code here
	Node* cur_fir = first;
	Node* cur_sec = second;
	Node* new_head = NULL;
	Node* cur_head = new_head;
	int count = 0;
	int flag = 0;
	while (cur_fir != NULL){
		cur_sec = second;
		// if (cur_fir->data_ == 2){
		// 	cout << "---------"<< cur_sec->data_ << endl;
		// }
		while(cur_sec != NULL){
			flag = 0;
			if (cur_fir->data_ == cur_sec->data_){
				cur_head = new_head;
				if (cur_head == NULL) flag = 1;
				while(cur_head != NULL){
					if (cur_head->data_ !=  cur_fir->data_) flag = 1; break;
					cur_head = cur_head->next_;
				}
				if (flag == 1){
					if (count == 0){
						Node* newNode = new Node(*cur_fir);
						new_head = newNode;
						newNode->next_ = NULL;
						++count;
						// cout << "Here---" << endl;

					}
					else{				
						Node* newNode = new Node(*cur_fir);
						cur_head = new_head;
						while(cur_head->next_ != NULL){
							cur_head = cur_head->next_;
						}
						cur_head->next_ = newNode;
						newNode->next_ = NULL;					
					}
				}
			}
			cur_sec = cur_sec->next_;
		}
		cur_fir = cur_fir->next_;
	}
  return new_head;
}

Node::Node() {
    numNodes++;
}

Node::Node(Node &other) {
    this->data_ = other.data_;
    this->next_ = other.next_;
    numNodes++;
}

Node::~Node() {
    numNodes--;
}

int Node::numNodes = 0;
