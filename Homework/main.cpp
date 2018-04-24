#include <iostream>
#include "vector.h"
int main() {
	Vector obj;
	obj.insert(2); 
	obj.insert(1); 
	obj.insert(2); 
	obj.insert(7); 
	obj.insert(3); 
	obj.insert(8);
	obj.print();
	obj.remove(2);
	obj.print();
	obj.find(7); 
	obj.find(23);
	obj.operator[](4);
	return 0;
}
