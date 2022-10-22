#include "priority_queue.h"
#include <iostream>

PriorityQueue PriorityQueue::operator&(PriorityQueue& other)
{
	return PriorityQueue();
}

PriorityQueue& PriorityQueue::operator+=(PriorityQueue& other)
{
	return *this;
}

PriorityQueue& PriorityQueue::operator=(PriorityQueue& other)
{
	return *this;
}

Wrapper PriorityQueue::poll()
{
	if (size == 0) {
		throw "Queue is empty!";
	}
	Wrapper element = data[1];
	swap(1, size--);
	sink(1);
	return element;
}

Wrapper PriorityQueue::peek()
{
	if (size == 0) {
		throw "Queue is empty!";
	}
	return data[1];
}

Wrapper* PriorityQueue::pollWithPriority(int priority)
{
	return nullptr;
}

bool PriorityQueue::contains(int value)
{
	for (Wrapper* i = data; i < data + size; i++)
	{
		if ((*i).getValue() == value) {
			return true;
		}
	}
	return false;
}

int PriorityQueue::getSize()
{
	return this->size;
}

void PriorityQueue::sink(int k)
{
	while (2 * k <= size) {
		int j = 2 * k;
		if (j < size && data[j] < data[j + 1]) {
			j++;
		}
		if (data[k] >= data[j]) {
			break;
		}
		swap(k, j);
		k = j;
	}
}

void PriorityQueue::swim(int k)
{
	while (k > 1 && data[k / 2] < data[k]) {
		swap(k, k / 2);
		k /= 2;
	}
}

void PriorityQueue::insert(int value, int priority)
{
	data[++size] = Wrapper(value, priority);
	swim(size);
}

void PriorityQueue::swap(int i, int j) {
	Wrapper temp = data[i];
	data[i] = data[j];
	data[j] = temp;
}

std::ostream& operator<<(std::ostream& os, const PriorityQueue& priorityQueue)
{
	return os;
}
