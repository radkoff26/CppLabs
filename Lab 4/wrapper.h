#pragma once

class Wrapper {
public:
	Wrapper() {

	}
	Wrapper(int value, int priority) {
		this->value = value;
		this->priority = priority;
	}
	int getValue() {
		return value;
	}
	int getPriority() {
		return priority;
	}
	bool operator>=(Wrapper&);
	bool operator<(Wrapper&);
	bool operator==(Wrapper&);
private:
	int priority;
	int value;
};