#pragma once

#include <cstddef>

class Queue {
	public:
		// Queue();
		~Queue();
		int size() const;
		bool isEmpty() const;
		void enqueue(int value);
		int dequeue();
	private:
		class Node{
			public:
				// Node(int);
				Node* next;
				Node* prev;
				int elem;
		};
		Node* head_;
		Node* tail_;
};