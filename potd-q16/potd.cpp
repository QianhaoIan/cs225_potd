#include "potd.h"
#include <iostream>
using namespace std;

void insertSorted(Node **head, Node *insert) {
  // your code here!
	//insert a new node into the front of the list
	if (*head == NULL) *head = insert;

	else if ((*head)->data_ > insert->data_){
		Node* tmp;
		tmp = *head;
		*head = insert;
		insert->next_ = tmp;
	}

	else {
		//insert a new node into middle or back of the list
		Node* cur_node;
		cur_node = *head;
		while(true){
			//back of the list
			if (cur_node->next_ == NULL){
				cur_node->next_ = insert;
				break;
			}
			//if found the position of *insert
			if (insert->data_ > cur_node->data_ 
				&& insert->data_ < (cur_node->next_)->data_){
				insert->next_ = cur_node->next_;
				cur_node->next_ = insert;
				break;
			}
			cur_node = cur_node->next_;
		}
	}

}
