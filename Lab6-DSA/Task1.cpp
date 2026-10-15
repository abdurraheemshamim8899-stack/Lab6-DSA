#include"Lab6-task1.h"
 
using namespace std;

int main() {
	LinearQueue<int> queue(5);
	queue.enqueue(10);
	queue.enqueue(20);
	queue.enqueue(30);
	queue.display();
	queue.dequeue();
	queue.display();
	queue.enqueue(40);
	queue.enqueue(50);
	queue.enqueue(60); 
	queue.display();
	return 0;
}