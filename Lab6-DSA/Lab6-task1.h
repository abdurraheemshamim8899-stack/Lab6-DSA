#ifndef LINEARQUEUE_H
#define LINEARQUEUE_H

#include <iostream>
using namespace std;

template <typename T>
class LinearQueue {
private:
    int front, rear;
    int size;
    T* arr;

public:
    // Constructor
    LinearQueue(int s) {
        size = s;
        arr = new T[size];
        front = rear = -1;
    }

    // Destructor
    ~LinearQueue() {
        delete[] arr;
    }

    // Enqueue operation
    void enqueue(T value) {
        if (rear == size - 1) { //isfull check
            cout << "Queue Overflow! Cannot insert " << value << endl;
            return;
        }
        if (front == -1)
            front = 0;
        arr[++rear] = value;
        cout << value << " inserted into queue." << endl;
    }

    // Dequeue operation
    void dequeue() {
        if (front == -1 || front > rear) { //isempty check
            cout << "Queue Underflow! No elements to delete." << endl;
            return;
        }
        cout << arr[front] << " deleted from queue." << endl;
        front++;
        if (front > rear) // Reset queue when empty
            front = rear = -1;
    }

    // Display queue elements
    void display() {
        if (front == -1) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

#endif  #pragma once
