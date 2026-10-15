#include"Lab6-task3.h"
using namespace std;

int main3() {
	SingleLinkedListQueue<int> queue;
	queue.enqueue(10);
	queue.enqueue(20);
	queue.enqueue(30);
	queue.display();
	queue.dequeue();
	queue.display();
	queue.enqueue(40);
	queue.enqueue(50);
	queue.display();
	return 0;
}