#pragma once
#include "wrapper.h"
#include <iostream>

class PriorityQueue {
public:
	PriorityQueue() {
		data = new Wrapper(0, 0);
		size = 0;
	}
	PriorityQueue operator& (PriorityQueue&); // PriorityQueue union
	PriorityQueue& operator+= (PriorityQueue&); // PriorityQueue merge
	PriorityQueue& operator= (PriorityQueue&);
	friend std::ostream& operator<<(std::ostream& os, const PriorityQueue& priorityQueue);
	void insert(int value, int priority);
	Wrapper poll();
	Wrapper peek();
	Wrapper* pollWithPriority(int);
	bool contains(int);
	int getSize();
private:
	Wrapper* data;
	int size;
	void sink(int);
	void swim(int);
	void swap(int, int);
};