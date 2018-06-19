#include <iostream>
#include "queue.h"
int main() {
	Queue obj;
	obj.enqueue(1);
	obj.enqueue(3);
	obj.enqueue(7);
	obj.enqueue(6);
	obj.enqueue(8);
	obj.enqueue(4);
	obj.length();
	obj.print();
	obj.dequeue();
	obj.length();
	obj.print();
	
}
