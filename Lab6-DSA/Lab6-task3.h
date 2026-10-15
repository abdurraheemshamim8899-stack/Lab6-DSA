#ifndef SINGLELINKEDLISTQUEUE_H
#define SINGLELINKEDLISTQUEUE_H

#include <iostream>
using namespace std;

template <typename T>
class SingleLinkedListQueue {
public:
    Node* front;
	Node* rear;

	SingleLinkedListQueue() {
		front = rear = nullptr;
	}
	
	void enqueue(T value) {
		Node* newNode = new Node(value);
		if (rear == nullptr) {
			front = rear = newNode;
			return;
		}
		rear->next = newNode;
		rear = newNode;
		cout << value << " inserted into queue." << endl;
	}
	void dequeue() {
		if (isEmpty()) {
			cout << "Queue Underflow! No elements to delete." << endl;
			return;
		}
		Node* temp = front;
		cout << front->data << " deleted from queue." << endl;
		front = front->next;
		if (front == nullptr) {
			rear = nullptr;
		}
		delete temp;
	}
	bool isEmpty() {
		return (front == nullptr);
	}
	void display() {
		if (isEmpty()) {
			cout << "Queue is empty." << endl;
			return;
		}
		Node* temp = front;
		cout << "Queue elements: ";
		while (temp != nullptr) {
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}
};
#endif // LAB6_TASK3_H