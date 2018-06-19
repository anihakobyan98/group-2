#ifndef QUEUE
#define QUEUE
class Queue{
private:
	unsigned int index1;
	unsigned int index2;
	unsigned int max;
	int *arr;
public:
	Queue();
	Queue(const Queue& a);
	~Queue();
	int length();
	int enqueue(int);
	int dequeue();
	bool isEmpty();
	bool isFull();
	void print();
};
#endif
