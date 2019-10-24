#pragma once

#include <cstddef>


class Stack {
	public:
	  int size() const;
	  bool isEmpty() const;
	  void push(int value);
	  int pop();
	private:
		class Node{
			public:
				Node* next;
				Node* prev;
				int elem;
		};
		Node* head_;
		Node* tail_;

};