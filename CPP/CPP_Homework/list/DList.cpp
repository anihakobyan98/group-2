#include <iostream>
#include "DList.h"

List::List()
    :_head(0)
    ,_tail(0)
    ,_size(0)
{}
List::List(const List& list)
    :_size(list._size)
{
    Node* tmp = list._tail;
    std::cout << "tail " << list._tail->_prev <<std::endl;
    std::cout << "head " << list._head <<std::endl;
    Node* next = NULL;
   while(tmp) {
       std::cout << "prev " << tmp->_prev <<std::endl;
       std::cout << "next " << tmp->_next <<std::endl;
       std::cout << "value " << tmp->_value <<std::endl;
       tmp=tmp->_prev;
   }
    while(tmp) {
        Node* n = new Node();
        n->_value = tmp->_value;
        std::cout << "value = " << n ->_value <<std::endl;
        n->_next = next;
        next ? n->_prev->_next = n: NULL;
        next = n;
        tmp = tmp->_prev;
    }
}
List:: ~List(){
	while(_head) {
		Node* tmp = _head;
		_head = _head->_next;
		delete tmp;
	}
}
int& List::operator[](unsigned int index){
	if(index > _size) {
		std::cout << "WARNING: Out of range index: " << index << std::endl;
	int tmp = -1;
	return tmp;
	}
	Node* tmp = (Node*)shiftTo(index);
	return tmp->_value;
} 
void* List::shiftTo(unsigned int index) {
	Node* tmp = _head;
	for(int i = 0; i <= index; ++i) {
		tmp = tmp->_prev;
	}
	return tmp;
}
int  List::find(int value){
	Node* tmp = _head;
	for (int i = 0; i<= _size; ++i) {
		if(tmp->_value == value) {
			return i;
		}
		return -1;
	}
	
}
void List::insert(int value, unsigned int index=0){
	Node* n = new Node();
	if(index > _size) {
		std::cout << "WARNING: Out of range index: " << index << std::endl;
	index = _size;
	}
	if(index == 0) {
		pushFront(value);
	}
	if(index == _size) {
		pushEnd(value);
	}
}
void List::pushFront(int value) {
    Node* n = new Node();
    n->_value = value;
    n->_next = NULL;
    n->_prev = NULL;
    if(_head) {
        _head->_prev = n;
        n->_next = _head;
    }
    if(_tail == NULL) {
        _tail = n;
    }
    _head = n;
    std::cout << "head " << _head << std::endl;
    std::cout << "tail " << _tail << std::endl;
}
void List::pushEnd(int value){
	Node* n = new Node();
	n->_value = value;
	n->_next = NULL;
	n->_prev = NULL;
	if(_tail) {
		_tail->_next = n;
	} 
	if(_tail == NULL) {
		_tail = n;
	}
}
//work space
int List::remove(unsigned int index){
	if(index == 0) {
		Node* tmp = _head;
		int value = _head->_value;
		_head = _head->_next;
		delete tmp;
		_size--;
		return value;
	};
	if(index == _size) {
		Node* tmp = _tail;
		_tail = _tail->_prev;
		int value = _tail->_value;
		delete tmp;
		--_size;
		return value;
	}
	/*int n->_value = NULL;
	if(index > _size) {
		std::cout << "WARNING: Out of range index: " << index << std::endl;
	} else {
		delete n;
	}*/
}
//
int List::popFront(){
    if(_head) {
        int value = _head->_value;
        Node* tmp = _head;
        _head = _head->_next;
        std::cout << "head -> " <<_head <<std::endl;
        delete tmp;
        _head ? _head->_prev = NULL : NULL ;
        return value;
    }

}
int List::popEnd(){
	if(_tail) {
		int value = _tail->_value;
		Node* tmp = _tail;
		_tail = _tail->_prev;
		std::cout << "tail -> " << _tail << std::endl;
		delete tmp;
		_tail ? _tail->_next = NULL : NULL;
		return value;	
	}
}
