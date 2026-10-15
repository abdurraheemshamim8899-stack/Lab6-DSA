#include <iostream>
#include "Lab6-task2.h"
using namespace std;

int main2() {
    CircularQueue<int> q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.dequeue();
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.display();

    cout << "Final Front Position: " << q.getFront() << endl;
    cout << "Final Rear Position: " << q.getRear() << endl;

    return 0;
}
