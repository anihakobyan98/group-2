#include <iostream>
#include "vector.h"

Vector::Vector() {
	length = 10;
	index = 0;
}

int Vector::insert(int a) {
	if(index > length) {
		std::cout << "Vector is full" << std::endl;
	} else { 
		arr[++index] = a;
	}
	
}
int Vector::remove(int m) {
	if(index == 0) {
		std::cout << "Vector is empty" << std::endl;
	} else {
		for(index = m; index < length; ++index) {
			arr[index] = arr[index+1];
		}
	}
}
int Vector::find(int b) {
	for(int i = 0; i <= length; ++i) {
		if(arr[i] == b) {
			std::cout << "Searchable element index is " << i << std::endl;
			return i;
		}
	}
	std::cout << "Vector have not this element" << std::endl;
}
int Vector::operator[](int k) {
	if(k > length) {
		return -1;
	} else {
		std::cout << "Searchable index includes this element: " << arr[k] << std::endl;
		return arr[k];
	}
}
/*
int Vector::erace(int l) {
int *arr = new int[length];
int index.arr[length];
for(int i = 0;i < length;++i) {
	arr[i] = index.arr[i];
	delete index.arr[i];
	index.arr = arr;
	length = l;
}
	return l;
}

int Vector::resize(int n) {
	int m = 2 * n;
	if(m == length) {
		return 0;
	} 
	if(m < length) {
		return erace(m);
	} else {
		std::cout << "Warning!" << std::endl;
	}
}*/
bool Vector::isEmpty() {
	if(index == 0) {
		return true;
	} else {
		return false;
	}
}
void Vector::print() {
	std::cout << "Vector's elements is:" << std::endl; 
	for(int i = 1; i < length; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << "\nIs vector empty returns: " << isEmpty() << std::endl; 
}
