#include "potd.h"
#include <iostream>
#include <string>

using namespace std;

string stringList(Node *head) {
    // your code here!
    if (head == NULL)
    	return "Empty list";
    Node* cur_next;
    Node* cur_head;
    cur_head = head;
    cur_next = head->next_;
    string output;
    int count = 0;
    while (true){
    	output += "Node ";

    	output += to_string(count);
    	output += (": ");
    	output += to_string(cur_head->data_);
    	if (cur_next == NULL){
    		break;
    	}
    	cur_head = cur_next;
    	cur_next = cur_next->next_;
    	count ++;
    	output.append(" -> ");
    }
    return output;
}
