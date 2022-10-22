#include <iostream>
#include "wrapper.h"
#include "priority_queue.h"

using namespace std;

int main()
{
	PriorityQueue priorityQueue = PriorityQueue();

	priorityQueue.insert(1, 5);
	priorityQueue.insert(2, 3);
	priorityQueue.insert(3, 6);

	cout << priorityQueue.poll().getValue() << endl;
	cout << priorityQueue.poll().getValue() << endl;
	cout << priorityQueue.poll().getValue() << endl;
}
