#include <iostream>
#include "Lab6-task2.h"
using namespace std;

int main4()
{
    CircularQueue q;

    q.enqueue(501);
    q.enqueue(502);
    q.enqueue(503);
    q.enqueue(504);

    cout << "\nProcessing one packet:\n";
    q.dequeue();

    q.enqueue(505);
    q.enqueue(506);

    cout << "\nProcessing two packets:\n";
    q.dequeue();
    q.dequeue();

    q.enqueue(507);

    cout << "\nFinal packet buffer:\n";
    q.display();

    return 0;
}