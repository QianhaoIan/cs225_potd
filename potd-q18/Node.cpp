#include "Node.h"

void mergeList(Node *first, Node *second) {
	int flag = 0;
	Node* node_f = first;
	Node* node_s = second;
	Node* tmp;
	while(node_f != NULL && node_s != NULL){
		if (flag % 2 == 0){
			if (first == NULL) continue;
			tmp = node_f->next_;
			node_f->next_ = node_s;
			node_f = tmp;
			flag++;
		}
		else{
			if (node_f == NULL) continue;
			tmp = node_s->next_;
			node_s->next_ = node_f;
			node_s = tmp;
			flag++;
		}
	}
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
