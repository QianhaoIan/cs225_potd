#include "Node.h"
#include <iostream>
using namespace std;


// void printList(Node *head) {

// }




/** Create a new node and add it to the list, while keeping the list sorted.
*/
Node *insertSorted(Node *first, int data) {
    // your code here
    // while(first != NULL){

    // }

    return NULL;
}

/** Creates a new list (containing new nodes, allocated on the heap)
	that contains the set union of the values in both lists.
*/
Node *listUnion(Node *first, Node *second) {
    bool flag;
    Node *out = NULL;
    Node *pre = NULL;
    Node *pre_out = NULL;
    while (first != NULL) {
        flag = true;
        Node *cur_out = out;
        // your code here
        // hint: call insertSorted and update l1
        while(cur_out != NULL){
            if (cur_out->data_ == first->data_){
                flag = false;
            }
            pre_out = cur_out;
            cur_out = cur_out->next_;
        }
        if (flag){
            Node* new_node = new Node;
            new_node->data_ = first->data_;
            new_node->next_ = NULL;
            if (out == NULL) out = new_node;
            else pre_out->next_ = new_node;
        }
        pre = first;
        first = first->next_;
    }


    // cout << "--------------" << endl;
    //   if (out == NULL) {
    //     std::cout << "Empty list" << std::endl;
    //   }

    //   Node *temp = out;
    //   int count = 0;
    //   while(temp != NULL) {
    //     std::cout << "Node " << std::to_string(count) << ": " << temp ->data_ << std::endl;
    //     count++;
    //     temp = temp->next_;
    //   }




    while (second != NULL) {
        // your code here
        Node *pre = NULL;
        Node *pre_out = NULL;
        while (second != NULL) {
            flag = true;
            Node *cur_out = out;
            // your code here
            // hint: call insertSorted and update l1
            while(cur_out != NULL){
                if (cur_out->data_ == second->data_){
                    flag = false;
                }
                pre_out = cur_out;
                cur_out = cur_out->next_;
            }
            if (flag){
                Node* new_node = new Node;
                // cout << "---------------Here!" << second->data_ << endl; 
                new_node->data_ = second->data_;
                new_node->next_ = NULL;
                if (out == NULL) out = new_node;
                else pre_out->next_ = new_node;
            }
            pre = second;
            second = second->next_;
        }
    }
    // printList(out);
    // head = ;
    return out;
}

Node::Node() {
    numNodes++;
}

Node::Node(const Node &other) {
    this->data_ = other.data_;
    this->next_ = other.next_;
    numNodes++;
}

Node::~Node() {
    numNodes--;
}

int Node::numNodes = 0;

