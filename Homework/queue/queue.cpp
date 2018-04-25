#include <iostream>
#include "queue.h"
Queue::Queue() {
	index1 = 0;
	index2 = 0;
	max = 10;
	arr = new int[max];
}
Queue::Queue(const Queue& a) {
	max = a.max;
	arr = a.arr;
}
Queue::~Queue() {
	delete []arr;
}
int Queue::enqueue(int v) {
	if(index2 > max) {
		std::cout << "You can't add more elements" << std::endl;
	} else {
		arr[++index2] = v;
	}
}
int Queue::dequeue() {
	if(index2 == 0) {
		std::cout << "Queue haven't elements for deleting" << std::endl;
	} else {
		for(int i=index2; i > index1; --i) {
			int x = arr[i-1];
			arr[i-1] = arr[i];
			arr[i] = x;	
		}
	}
}
bool Queue::isEmpty() {
	if(index2 == 0) {
		return true;
	} else {
		return false;
	}
}
bool Queue::isFull() {
	if(index2 == max) {
		return true;
	} else {
		return false;
	}
}
int Queue::length() {
	if(isEmpty()) {
		return 0;
	} else {
		return index2;
	}	
}
void Queue::print() {
	std::cout << "Queue have this elements:" << std::endl;
	for(int i = 1; i < max; ++i) {
		std::cout << arr[i] << " " ;
	}
	std::cout << "\nIs empty: " << isEmpty() << std::endl;
	std::cout << "Is full: " << isFull() << std::endl;
	std::cout << "Length of queue is : " << length() << std::endl;
}
