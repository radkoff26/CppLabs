#include "wrapper.h"

bool Wrapper::operator<(Wrapper& other) {
	return this->priority < other.priority;
}

bool Wrapper::operator>=(Wrapper& other) {
	return this->priority >= other.priority;
}

bool Wrapper::operator==(Wrapper& other) {
	return this->priority == other.priority;
}