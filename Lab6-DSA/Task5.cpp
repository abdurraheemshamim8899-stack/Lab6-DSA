#include"Lab6-task3.h"
using namespace std;

int main5()
{
    LinkedQueue q;

    q.enqueue(701);
    q.enqueue(702);
    q.enqueue(703);

    q.dequeue();

    q.enqueue(704);
    q.enqueue(705);

    q.dequeue();

    cout << "\nRemaining support requests:\n";
    q.display();

    q.peek();

    return 0;
}