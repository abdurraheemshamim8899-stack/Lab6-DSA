#ifndef CIRCULARQUEUE_H
#define CIRCULARQUEUE_H

#include <iostream>
using namespace std;

template <typename T>
class CircularQueue {
private:
    int front, rear;
    int size;
    T* arr;

    bool isFull() {
        return ((rear + 1) % size == front);
    }

    bool isEmpty() {
        return (front == -1);
    }

public:
    CircularQueue(int s) {
        size = s;
        arr = new T[size];
        front = rear = -1;
    }

    ~CircularQueue() {
        delete[] arr;
    }

    void enqueue(T value) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot insert " << value << endl;
            return;
        }
        if (front == -1) {
            front = 0;
        }
        rear = (rear + 1) % size;
        arr[rear] = value;
        cout << value << " inserted into queue." << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! No elements to delete." << endl;
            return;
        }
        cout << arr[front] << " deleted from queue." << endl;
        if (front == rear) {
            front = rear = -1;
        }
        else {
            front = (front + 1) % size;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
        }
        else {
            cout << "Front element is: " << arr[front] << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % size;
        }
        cout << endl;
    }

    int getFront() { return front; }
    int getRear() { return rear; }
};

#endif#pragma once
